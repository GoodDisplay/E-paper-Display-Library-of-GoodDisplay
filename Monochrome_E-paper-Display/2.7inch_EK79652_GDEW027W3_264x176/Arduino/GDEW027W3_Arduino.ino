#include <SPI.h>
#include"Ap_29demo.h"
//IO settings
int BUSY_Pin = 4; 
int RES_Pin = 5; 
int DC_Pin = 6; 
int CS_Pin = 7; 

#define EPD_W21_CS_0 digitalWrite(CS_Pin,LOW)
#define EPD_W21_CS_1 digitalWrite(CS_Pin,HIGH)
#define EPD_W21_DC_0  digitalWrite(DC_Pin,LOW)
#define EPD_W21_DC_1  digitalWrite(DC_Pin,HIGH)
#define EPD_W21_RST_0 digitalWrite(RES_Pin,LOW)
#define EPD_W21_RST_1 digitalWrite(RES_Pin,HIGH)
#define isEPD_W21_BUSY digitalRead(BUSY_Pin)
////////FUNCTION//////
void DELAY_100nS(unsigned int delaytime);
void driver_delay_us(unsigned int xus);
void driver_delay_xms(unsigned long xms);
void DELAY_S(unsigned int delaytime);     
void SPI_Delay(unsigned char xrate);
void SPI_Write(unsigned char value);
void EPD_W21_WriteDATA(unsigned char command);
void EPD_W21_WriteCMD(unsigned char command);
//EPD
void EPD_W21_Init(void);
void EPD_init(void);
void PIC_display1(void);
void PIC_display2(void);
void EPD_sleep(void);
void EPD_refresh(void);
void lcd_chkstatus(void);
void PIC_display_Clean(void);
unsigned char HRES,VRES_byte1,VRES_byte2;
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
  while(1)
  {
    //PICTURE1
    EPD_init(); //EPD init
    PIC_display1();
    EPD_refresh();//EPD_refresh   
    EPD_sleep();//EPD_sleep,Sleep instruction is necessary, please do not delete!!!
    delay(3000);
    
    //PICTURE2
     EPD_init(); //EPD init
    PIC_display2();
    EPD_refresh();//EPD_refresh   
    EPD_sleep();//EPD_sleep,Sleep instruction is necessary, please do not delete!!!
    delay(3000);
    
    //PICTURE Clean
     EPD_init(); //EPD init
    PIC_display_Clean();
    EPD_refresh();//EPD_refresh   
    EPD_sleep();//EPD_sleep,Sleep instruction is necessary, please do not delete!!!
    while(1); 

  }
}




///////////////////EXTERNAL FUNCTION////////////////////////////////////////////////////////////////////////
//////////////////////SPI///////////////////////////////////
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
void EPD_W21_Init(void)
{
  EPD_W21_RST_0;    // Module reset
  delay(10); //At least 10ms
  EPD_W21_RST_1;
  delay(10);  
}
void EPD_init(void)
{
    EPD_W21_Init(); //Electronic paper IC reset

    EPD_W21_WriteCMD(0x06);         //boost soft start
    EPD_W21_WriteDATA (0x17);   //A
    EPD_W21_WriteDATA (0x17);   //B
    EPD_W21_WriteDATA (0x17);   //C       
 
    EPD_W21_WriteCMD(0x04);  //Power on
    lcd_chkstatus();        //waiting for the electronic paper IC to release the idle signal

    EPD_W21_WriteCMD(0x00);     //panel setting
    EPD_W21_WriteDATA(0x1f);    //LUT from OTP????128x296
    EPD_W21_WriteCMD(0x0d);     //VCOM to 0V fast

    EPD_W21_WriteCMD(0x16);
    EPD_W21_WriteDATA(0x00);        //KW-BF   KWR-AF  BWROTP 0f 
  
    EPD_W21_WriteCMD(0xF8);         //boost????????
    EPD_W21_WriteDATA (0x60);
    EPD_W21_WriteDATA(0xa5);

    EPD_W21_WriteCMD(0xF8);         //boost????????
    EPD_W21_WriteDATA (0x73);
    EPD_W21_WriteDATA (0x23);

    EPD_W21_WriteCMD(0xF8);         //boost????????
    EPD_W21_WriteDATA (0x7C);
    EPD_W21_WriteDATA(0x00);
    
    EPD_W21_WriteCMD(0X50);
    EPD_W21_WriteDATA(0x97);    //WBmode:VBDF 17|D7 VBDW 97 VBDB 57   WBRmode:VBDF F7 VBDW 77 VBDB 37  VBDR B7

}
void EPD_refresh(void)
{
    EPD_W21_WriteCMD(0x12);     //DISPLAY REFRESH   
    delay(10);          //!!!The delay here is necessary, 200uS at least!!!     
    lcd_chkstatus();
} 
void EPD_sleep(void)
{
    EPD_W21_WriteCMD(0X50);  //VCOM AND DATA INTERVAL SETTING  
    EPD_W21_WriteDATA(0xf7);
       
    EPD_W21_WriteCMD(0X07);   //deep sleep
    EPD_W21_WriteDATA(0xA5);
}



void PIC_display1(void)
{
    unsigned int i;
    EPD_W21_WriteCMD(0x10);        //Transfer old data
    for(i=0;i<5808;i++)      
  {
    EPD_W21_WriteDATA(0xff);
  }
  
    EPD_W21_WriteCMD(0x13);        //Transfer new data
    for(i=0;i<5808;i++)    
    {  
     EPD_W21_WriteDATA(pgm_read_byte(&gImage_1[i]));
    }

}
void PIC_display2(void)
{
    unsigned int i;
    EPD_W21_WriteCMD(0x10);        //Transfer old data
    for(i=0;i<5808;i++)      
    EPD_W21_WriteDATA(0xff); 
  
    EPD_W21_WriteCMD(0x13);        //Transfer new data
    for(i=0;i<5808;i++)      
     EPD_W21_WriteDATA(pgm_read_byte(&gImage_2[i]));

}
void PIC_display_Clean(void)
{
    unsigned int i;
    EPD_W21_WriteCMD(0x10);        //Transfer old data
    for(i=0;i<5808;i++)       
  {
    EPD_W21_WriteDATA(0xff);
  }
  
    EPD_W21_WriteCMD(0x13);        //Transfer new data    
    for(i=0;i<5808;i++)       
  {
    EPD_W21_WriteDATA(0xff);
  }
}
void lcd_chkstatus(void)
{
   while(1)
  {   //=0 BUSY
     if(isEPD_W21_BUSY==1) break;
  }                        
}
///////////////////////END////////////////////////////////////
