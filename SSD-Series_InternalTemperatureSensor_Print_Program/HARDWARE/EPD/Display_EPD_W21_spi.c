#include "Display_EPD_W21_spi.h"
/*******************************************************************************
* ������   : GPIO_Configuration
* ����         : �������ô�������GPIO���ŵĲ���
* ����         : None
* ���         : None
* ����         : None
*******************************************************************************/
void GPIO_Configuration(void)
{
  GPIO_InitTypeDef GPIO_InitStructure;

  RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOD, ENABLE);
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_8 | GPIO_Pin_9 | GPIO_Pin_10 ;    //abcd OE ST LT0���
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_2MHz;
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
  GPIO_Init(GPIOD, &GPIO_InitStructure);
	


  RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOE, ENABLE);
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_11 | GPIO_Pin_14 |GPIO_Pin_15;    //abcd OE ST LT0���
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_2MHz;
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
  GPIO_Init(GPIOE, &GPIO_InitStructure);
	
	

  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_13;    //abcd OE ST LT0���
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_2MHz;
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING;
  GPIO_Init(GPIOE, &GPIO_InitStructure);
			//����LED�ƹ���
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_12;    //LED
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_2MHz;
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
  GPIO_Init(GPIOE, &GPIO_InitStructure);
	GPIO_SetBits(GPIOE,GPIO_Pin_5); 						 //PE.5 ����� 
}

void GPIO_IO(unsigned char i) //GOIOģʽ��ת  0�����룬1�������
{
	 GPIO_InitTypeDef GPIO_InitStructure;
	 RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOD, ENABLE);
	if(i==0)
	{		
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_10;    
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_2MHz;
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING;
  GPIO_Init(GPIOD, &GPIO_InitStructure);
	}
	else
	{
  GPIO_InitStructure.GPIO_Pin =GPIO_Pin_10 ;    
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_2MHz;
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
  GPIO_Init(GPIOD, &GPIO_InitStructure);
	}
}
void SPI_Delay(unsigned char xrate)
{
	unsigned char i;
	while(xrate)
	{
		for(i=0;i<EPD_W21_SPI_SPEED;i++);
		xrate--;
	}
}


void SPI_Write(unsigned char value)                                    
{                                                           
    unsigned char i;
	
	SPI_Delay(1);
    for(i=0; i<8; i++)   
    {
        EPD_W21_CLK_0;
		SPI_Delay(1);
        if(value & 0x80)
        	EPD_W21_MOSI_1;
        else
        	EPD_W21_MOSI_0;		
        value = (value << 1); 
		SPI_Delay(1);
		driver_delay_us(1);
        EPD_W21_CLK_1; 
        SPI_Delay(1);
    }
}

void EPD_W21_WriteCMD(unsigned char command)
{
    SPI_Delay(1);
    EPD_W21_CS_0;                   
	EPD_W21_DC_0;		// command write
	SPI_Write(command);
	EPD_W21_CS_1;
}
void EPD_W21_WriteDATA(unsigned char command)
{
    SPI_Delay(1);
    EPD_W21_CS_0;                   
	EPD_W21_DC_1;		// command write
	SPI_Write(command);
	EPD_W21_CS_1;
}

unsigned char EPD_W21_ReadDATA(void)
{
	
	unsigned char i,j=0;
    EPD_W21_CS_0;                   
	  EPD_W21_DC_1;		// command write(Must be added)
	  EPD_W21_MOSI_1;
    SPI_Delay(2);
     for(i=0; i<8; i++)   
    {
    EPD_W21_CLK_0;
		SPI_Delay(20);
		j=(j<<1);
        if(EPD_W21_READ==1)    	
			j|=0x01;
        else
    j&=~0x01;		 
		SPI_Delay(20);
		driver_delay_us(5);
    EPD_W21_CLK_1; 
    SPI_Delay(5);
    }
	EPD_W21_CS_1;
	return(j);
}


/***********************************************************
						end file
***********************************************************/
