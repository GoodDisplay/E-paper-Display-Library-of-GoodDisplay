#include <SPI.h>
#include"Ap_29demo.h"
//IO settings
int BUSY_Pin = D0; 
int RES_Pin = D1; 
int DC_Pin = D2; 
int CS_Pin = D4; 
//HSCLK---D5
//HMOSI--D7
#define EPD_W21_CS_0 digitalWrite(CS_Pin,LOW)
#define EPD_W21_CS_1 digitalWrite(CS_Pin,HIGH)
#define EPD_W21_DC_0  digitalWrite(DC_Pin,LOW)
#define EPD_W21_DC_1  digitalWrite(DC_Pin,HIGH)
#define EPD_W21_RST_0 digitalWrite(RES_Pin,LOW)
#define EPD_W21_RST_1 digitalWrite(RES_Pin,HIGH)
#define isEPD_W21_BUSY digitalRead(BUSY_Pin)
//250*122///////////////////////////////////////

#define MONOMSB_MODE 1
#define MONOLSB_MODE 2 
#define RED_MODE     3

#define MAX_LINE_BYTES 120// =960/8
#define MAX_COLUMN_BYTES  640

#define ALLSCREEN_GRAGHBYTES  76800

////////FUNCTION//////
void driver_delay_us(unsigned int xus);
void driver_delay_xms(unsigned long xms);
void DELAY_S(unsigned int delaytime);     
void SPI_Delay(unsigned char xrate);
void SPI_Write(unsigned char value);
void EPD_W21_WriteCMD(unsigned char command);
void EPD_W21_WriteDATA(unsigned char command);
//EPD
void lcd_chkstatus(void);
void EPD_HW_Init(void); //Electronic paper initialization
void EPD_Update(void);

void EPD_WhiteScreen_Black(void);
void EPD_WhiteScreen_White(void);
void EPD_DeepSleep(void);

//Display 
void EPD_WhiteScreen_ALL(const unsigned char *BW_datas,const unsigned char *R_datas);
void EPD_WhiteScreen_ALL_Clean(void);

void Sys_run(void)
{
   ESP.wdtFeed(); //Feed dog to prevent system reset
  }
void LED_run(void)
{
  digitalWrite(LED_BUILTIN, LOW);   // Turn the LED on (Note that LOW is the voltage level
  delay(500);
  digitalWrite(LED_BUILTIN, HIGH);   // Turn the LED on (Note that LOW is the voltage level
  delay(500);
  }
void setup() {
   pinMode(BUSY_Pin, INPUT); 
   pinMode(RES_Pin, OUTPUT);  
   pinMode(DC_Pin, OUTPUT);    
   pinMode(CS_Pin, OUTPUT);    
   //SPI
   SPI.beginTransaction(SPISettings(10000000, MSBFIRST, SPI_MODE0)); 
   SPI.begin ();  
}
//Tips//
/*When the electronic paper is refreshed in full screen, the picture flicker is a normal phenomenon, and the main function is to clear the display afterimage in the previous picture.
  When the local refresh is performed, the screen does not flash.*/
/*When you need to transplant the driver, you only need to change the corresponding IO. The BUSY pin is the input mode and the others are the output mode. */
  
void loop() {
    //Full screen refresh
    EPD_HW_Init(); //Electronic paper initialization
    EPD_WhiteScreen_ALL(gImage_BW,gImage_R); //Refresh the picture in full screen
    EPD_DeepSleep(); //Enter deep sleep,Sleep instruction is necessary, please do not delete!!! 
    delay(3000);   
    
    //Clean
    EPD_HW_Init(); //Electronic paper initialization
    EPD_WhiteScreen_ALL_Clean();
    EPD_DeepSleep(); //Enter deep sleep,Sleep instruction is necessary, please do not delete!!!
    delay(2000); 
   while(1) 
  {
   Sys_run();//System run
   LED_run();//Breathing lamp
  }
}












///////////////////EXTERNAL FUNCTION////////////////////////////////////////////////////////////////////////
void SPI_Write(unsigned char value)                                    
{                                                           
    SPI.transfer(value);

}

void EPD_W21_WriteCMD(unsigned char command)
{
  EPD_W21_CS_0;                   
  EPD_W21_DC_0;   // command write
  SPI_Write(command);
  EPD_W21_CS_1;
}
void EPD_W21_WriteDATA(unsigned char command)
{
  EPD_W21_CS_0;                   
  EPD_W21_DC_1;   // command write
  SPI_Write(command);
  EPD_W21_CS_1;
}

/////////////////EPD settings Functions/////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////////
//SSD1680
void EPD_HW_Init(void)
{
  EPD_W21_RST_0;  // Module reset      
  delay(10); //At least 10ms delay 
  EPD_W21_RST_1; 
  delay(10); //At least 10ms delay  
    
    EPD_W21_WriteCMD(0x12);       //SWRESET
    lcd_chkstatus();        //waiting for the electronic paper IC to release the idle signal
    
    EPD_W21_WriteCMD(0x0C);  // Soft start setting
    EPD_W21_WriteDATA(0xAE);
    EPD_W21_WriteDATA(0xC7);
    EPD_W21_WriteDATA(0xC3);
    EPD_W21_WriteDATA(0xC0);
    EPD_W21_WriteDATA(0x40);   

    EPD_W21_WriteCMD(0x01);  // Set MUX as 639
    EPD_W21_WriteDATA(0x7F);
    EPD_W21_WriteDATA(0x02);
    EPD_W21_WriteDATA(0x00);

    EPD_W21_WriteCMD(0x11);  // Data entry mode
    EPD_W21_WriteDATA(0x01);
    
    EPD_W21_WriteCMD(0x44);
    EPD_W21_WriteDATA(0x00); // RAM x address start at 0
    EPD_W21_WriteDATA(0x00);
    EPD_W21_WriteDATA(0xBF); // RAM x address end at 3BFh -> 959
    EPD_W21_WriteDATA(0x03);
    EPD_W21_WriteCMD(0x45);
    EPD_W21_WriteDATA(0x7F); // RAM y address start at 27Fh;
    EPD_W21_WriteDATA(0x02);
    EPD_W21_WriteDATA(0x00); // RAM y address end at 00h;
    EPD_W21_WriteDATA(0x00);

    EPD_W21_WriteCMD(0x3C); // VBD
    EPD_W21_WriteDATA(0x01); // LUT1, for white

    EPD_W21_WriteCMD(0x18);
    EPD_W21_WriteDATA(0X80);
    EPD_W21_WriteCMD(0x22);
    EPD_W21_WriteDATA(0XB1);  //Load Temperature and waveform setting.
    EPD_W21_WriteCMD(0x20);
    lcd_chkstatus();        //waiting for the electronic paper IC to release the idle signal

    EPD_W21_WriteCMD(0x4E); 
    EPD_W21_WriteDATA(0x00);
    EPD_W21_WriteDATA(0x00);
    EPD_W21_WriteCMD(0x4F); 
    EPD_W21_WriteDATA(0x7F);
    EPD_W21_WriteDATA(0x02);

  
}
//////////////////////////////All screen update////////////////////////////////////////////
void EPD_WhiteScreen_ALL(const unsigned char *BW_datas,const unsigned char *R_datas)
{
   unsigned int i;  
  EPD_W21_WriteCMD(0x24);   //write RAM for black(0)/white (1)
   for(i=0;i<ALLSCREEN_GRAGHBYTES;i++)
   {               
     EPD_W21_WriteDATA(pgm_read_byte(&BW_datas[i]));
      if(i%20000==0)
      ESP.wdtFeed(); //Feed dog to prevent system reset    
   }
  EPD_W21_WriteCMD(0x26);   //write RAM for black(0)/white (1)
   for(i=0;i<ALLSCREEN_GRAGHBYTES;i++)
   {               
     EPD_W21_WriteDATA(~(pgm_read_byte(&R_datas[i])));
     if(i%20000==0)
      ESP.wdtFeed(); //Feed dog to prevent system reset     
   }
   EPD_Update();   
}

void EPD_WhiteScreen_ALL_Clean(void)
{
   unsigned int i;  
  EPD_W21_WriteCMD(0x24);   //write RAM for black(0)/white (1)
   for(i=0;i<ALLSCREEN_GRAGHBYTES;i++)
   {               
     EPD_W21_WriteDATA(0xff);
     if(i%20000==0)
      ESP.wdtFeed(); //Feed dog to prevent system reset
   }
  EPD_W21_WriteCMD(0x26);   //write RAM for black(0)/white (1)
   for(i=0;i<ALLSCREEN_GRAGHBYTES;i++)
   {               
     EPD_W21_WriteDATA(0x00);
     if(i%20000==0)
      ESP.wdtFeed(); //Feed dog to prevent system reset     
   }
   EPD_Update();   
}

/////////////////////////////////////////////////////////////////////////////////////////
void EPD_Update(void)
{
  EPD_W21_WriteCMD(0x22); //Display Update Control
  EPD_W21_WriteDATA(0xF7);   
  EPD_W21_WriteCMD(0x20);  //Activate Display Update Sequence
  lcd_chkstatus();   

}

void EPD_DeepSleep(void)
{  
  EPD_W21_WriteCMD(0x10); //enter deep sleep
  EPD_W21_WriteDATA(0x01); 
  delay(100);
}
void lcd_chkstatus(void)
{ 
  while(1)
  {   //=1 BUSY
     if(isEPD_W21_BUSY==0) break;
      ESP.wdtFeed(); //Feed dog to prevent system reset
  }  
}



//////////////////////////////////END//////////////////////////////////////////////////
