#include <avr/pgmspace.h>
const unsigned char gImage_BW1[2024]PROGMEM = { /* 0X81,0X01,0XB8,0X00,0X58,0X00, */
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XBF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0X3F,0XFF,0X9F,0XFF,0XFC,0XFF,0XFF,0XFF,0XFF,0XFC,0X3C,0X7F,0XFF,0X9F,
0XE7,0XFC,0XFF,0XFF,0XFF,0XFF,0XF8,0X18,0XFF,0XFF,0X9F,0XE7,0XFC,0XFF,0XFF,0XC0,
0X00,0XF3,0XC3,0XFF,0XFF,0X9F,0XE7,0XFC,0XFF,0XFF,0XC0,0X00,0XF7,0XE7,0XFF,0XFF,
0X9F,0XE7,0XFC,0XFF,0XFF,0XFF,0X7F,0XF7,0XEF,0XFF,0XFF,0X9F,0XE7,0XFC,0XFF,0XFF,
0XFF,0X7F,0XF7,0XEF,0XFF,0XFF,0X9F,0XE7,0XFC,0XFF,0XFF,0XFF,0X7F,0XF7,0XEF,0XFF,
0XFF,0X9F,0XE7,0XFC,0XFF,0XFF,0XFF,0X7F,0XF0,0X00,0X3F,0XFF,0X9F,0XE7,0XFC,0XFF,
0XFF,0XFF,0X7F,0XF0,0X00,0X3F,0XFF,0X80,0X00,0X00,0XFF,0XFF,0XFF,0X7F,0XFF,0XFF,
0XFF,0XFF,0X80,0X00,0X00,0XFF,0XFF,0XFF,0X7F,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X00,
0XFF,0XFF,0XC0,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,0XF7,
0XFF,0XBF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF7,0XDF,0XBF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XF7,0XDF,0XBF,0XFF,0XFF,0XFF,0XFC,0XFF,0XFF,0XFF,0XFF,
0XF7,0XDF,0XBF,0XFF,0XFF,0XFF,0XFC,0XFF,0XFF,0XEF,0XFD,0XF7,0XDF,0XBF,0XFF,0XFF,
0XFF,0XFC,0XFF,0XFF,0XDF,0XFE,0XF0,0X00,0X3F,0XFF,0XFF,0XFF,0XFC,0XFF,0XFF,0XDF,
0XFE,0XF0,0X00,0X3F,0XFF,0XFF,0XFF,0XFC,0XFF,0XFF,0XDF,0XFE,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFC,0XFF,0XFF,0XDF,0XFE,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0XFF,0XFF,
0XCF,0XFC,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0XFF,0XFF,0XE7,0XFD,0XFC,0X3F,0XFF,
0XFF,0XFF,0XFF,0XFC,0XFF,0XFF,0XE3,0XF1,0XF8,0X1F,0XFF,0XFF,0X80,0X00,0X00,0XFF,
0XFF,0XF0,0X03,0XF3,0XCF,0XFF,0XFF,0X80,0X00,0X00,0XFF,0XFF,0XFC,0X0F,0XF7,0XEF,
0XFF,0XFF,0X80,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XF7,0XEF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XF7,0XEF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,
0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,0XF0,0X00,0X3F,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XC0,0X00,0XFF,0XFF,0XFF,0XFF,0X9F,0XFF,0XFC,0XFF,0XFF,0XFF,0XF8,
0XFF,0XFF,0XFF,0XFF,0X9F,0XFF,0XFC,0XFF,0XFF,0XFF,0XE3,0XFF,0XFF,0XBF,0XFF,0X80,
0X00,0X00,0XFF,0XFF,0XFF,0X8F,0XFF,0XFC,0X3F,0XFF,0X80,0X00,0X00,0XFF,0XFF,0XFE,
0X3F,0XFF,0XE0,0X7F,0XFF,0X80,0X00,0X00,0XFF,0XFF,0XF8,0X7F,0XFF,0X03,0XFF,0XFF,
0X9F,0XFF,0XFC,0XFF,0XFF,0XE1,0XFF,0XF8,0X1B,0XFF,0XFF,0X9F,0XFF,0XFC,0XFF,0XFF,
0XC7,0XFF,0XF0,0XFB,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,0XF0,0XFB,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,0XF8,0X1B,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFE,0X03,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC3,
0XFF,0XFF,0X80,0X00,0X00,0XFF,0XFF,0XCF,0XFC,0XFF,0XF0,0X7F,0XFF,0X80,0X00,0X00,
0XFF,0XFF,0XC0,0X00,0XFF,0XFC,0X3F,0XFF,0X80,0X00,0X00,0XFF,0XFF,0XC0,0X00,0XFF,
0XFF,0XBF,0XFF,0X83,0XFF,0XFF,0XFF,0XFF,0XCF,0XFC,0XFF,0XFF,0XFF,0XFF,0XC0,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X3F,0XFF,0XFF,0XF8,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,
0XF8,0X1F,0XFF,0XFF,0XFF,0X03,0XFF,0XFF,0XFF,0XFF,0XFF,0XF3,0XCF,0XFF,0XFF,0XFF,
0XC0,0X7F,0XFF,0XFF,0XFF,0XFF,0XF7,0XEF,0XFF,0XFF,0XFF,0XF8,0X0F,0XFF,0XFF,0XFF,
0XFF,0XF7,0XEF,0XFF,0XFF,0XFF,0XFF,0X01,0XFF,0XFF,0XFF,0XFF,0XF7,0XEF,0XFF,0XFF,
0XFF,0XFF,0XE0,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X3F,0XFF,0XFF,0XFF,0XC0,0XFF,0XFF,
0XDF,0XFF,0XF0,0X00,0X3F,0XFF,0XFF,0XFF,0X01,0XFF,0XFF,0XC3,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFC,0X0F,0XFF,0XFF,0XD0,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X3F,0XFF,
0XFF,0XDE,0X0F,0XFF,0XFF,0XFF,0XFF,0XFF,0X81,0XFF,0XFF,0XFF,0XDF,0X81,0XFF,0XF7,
0XFF,0XFF,0XFE,0X07,0XFF,0XFF,0XFF,0XDF,0XF0,0XFF,0XF7,0XFF,0XFF,0XF0,0X3F,0XFF,
0XFF,0XFF,0XDF,0XFE,0XFF,0XF7,0XFF,0XFF,0XC0,0XFF,0XFF,0XFF,0XFF,0XDF,0XFF,0XFF,
0XF7,0XFF,0XFF,0X87,0XFF,0XFF,0XFF,0XFF,0XDF,0XFF,0XFF,0XF7,0XFF,0XFF,0X80,0X00,
0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XF7,0XFF,0XFF,0X80,0X00,0X00,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X00,0XFF,0XFF,0XF8,0X0F,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XE0,0X03,0XF7,0XFF,0XBF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC7,
0XB9,0XF7,0XDF,0XBF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XDF,0XDC,0XF7,0XDF,0XBF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XDF,0XDE,0XF7,0XDF,0XBF,0XFF,0XFF,0XFF,0X0F,0XFF,0XFF,
0XDF,0XDE,0XF7,0XDF,0XBF,0XFF,0XCF,0XFC,0X03,0XFF,0XFF,0XCF,0X9E,0XF0,0X00,0X3F,
0XFF,0X8F,0XF8,0X01,0XFF,0XFF,0XE0,0X3D,0XF0,0X00,0X3F,0XFF,0X9F,0XF0,0X71,0XFF,
0XFF,0XF0,0X7F,0XFF,0XFF,0XFF,0XFF,0X9F,0XF1,0XF8,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0X9F,0XE1,0XFC,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X9F,0XE3,0XFC,
0XFF,0XFF,0XFF,0XFC,0XFF,0XFF,0XFF,0XFF,0X9F,0XC3,0XFC,0XFF,0XFF,0XFF,0XFC,0XFF,
0XFF,0XFF,0XFF,0X9F,0XC7,0XFC,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XCF,0X87,
0XFC,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC7,0X0F,0XFC,0XFF,0XFF,0XF8,0X07,
0XFF,0XFF,0XFF,0XFF,0XC0,0X1F,0XF9,0XFF,0XFF,0XE0,0X01,0XFF,0XFF,0XFF,0XFF,0XE0,
0X1F,0XF9,0XFF,0XFF,0XC7,0XF9,0XFF,0XFF,0XFF,0XFF,0XF8,0X7F,0XF3,0XFF,0XFF,0XDF,
0XFE,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XDF,0XFE,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XDF,0XFE,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XE7,0XF8,0XFF,0XFF,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X01,0XFF,0XC0,0X00,
0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X07,0XFE,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XF0,0X00,0X1C,0X00,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X01,
0XFF,0XE0,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X00,0X3F,0XFF,0XFE,0X00,0X7F,0XFF,
0XFF,0XFF,0XFF,0XFC,0X07,0XFF,0XFF,0XFF,0XF0,0X1F,0XFF,0XFF,0XFF,0XFF,0XF8,0X0F,
0XFF,0XFF,0XFF,0XF8,0X0F,0XFF,0XFF,0XFF,0XFF,0XF0,0X3F,0XFF,0XFF,0XFF,0XFE,0X07,
0XFF,0XFF,0XFF,0XFF,0XC0,0X7F,0XFF,0XFF,0XFF,0XFF,0X01,0XFF,0XFF,0XFF,0XFF,0X81,
0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0XFF,0XFF,0XFF,0XFF,0X03,0XFF,0XFF,0XFF,0XFF,0XFF,
0XE0,0X7F,0XFF,0XFF,0XFE,0X0F,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X3F,0XFF,0XFF,0XFC,
0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X1F,0XFF,0XFF,0XF8,0X3F,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0X0F,0XFF,0XFF,0XF0,0X7F,0XFF,0XC0,0XFF,0XFF,0XFF,0XFF,0X07,0XFF,0XFF,
0XF0,0XFF,0XFF,0X00,0X3F,0XFF,0XFF,0XFF,0X87,0XFF,0XFF,0XE1,0XFF,0XFE,0X00,0X1F,
0XFF,0XFF,0XFF,0XC3,0XFF,0XFF,0XC1,0XFF,0XFC,0X00,0X0F,0XFF,0XFF,0XFF,0XC1,0XFF,
0XFF,0X83,0XFF,0XF8,0X00,0X07,0XFF,0XFF,0XFF,0XE0,0XFF,0XFF,0X87,0XFF,0XF8,0X00,
0X07,0XFF,0XCF,0XFF,0XF0,0XFF,0XFF,0X07,0XFF,0XF8,0X00,0X03,0XFF,0X83,0XFF,0XF0,
0X7F,0XFF,0X0F,0XFF,0XF0,0X00,0X03,0XFF,0X80,0XFF,0XF8,0X7F,0XFE,0X1F,0XFF,0XF0,
0X00,0X03,0XFF,0XF0,0X3F,0XFC,0X3F,0XFE,0X1F,0XFF,0XF0,0X00,0X03,0XFF,0XFC,0X1F,
0XFC,0X3F,0XFC,0X3F,0XFF,0XF0,0X00,0X03,0XFF,0XFF,0X07,0XFE,0X1F,0XFC,0X7F,0XFF,
0XF0,0X00,0X03,0XFF,0XFF,0X83,0XFF,0X1F,0XFC,0X7F,0XFF,0XF8,0X00,0X07,0XFF,0XFF,
0XC1,0XFF,0X1F,0XF8,0X7F,0XFF,0XF8,0X00,0X07,0XFF,0XFF,0XE1,0XFF,0X0F,0XF8,0X7F,
0XFF,0XFC,0X00,0X0F,0XFF,0XFF,0XF0,0XFF,0X0F,0XF8,0X7F,0XFF,0XFE,0X00,0X1F,0XFF,
0XFF,0XF8,0X7F,0X8F,0XF0,0XFF,0XFF,0XFF,0X00,0X3F,0XFF,0XFF,0XF8,0X7F,0X87,0XF0,
0XFF,0XFF,0XFF,0XC0,0XFF,0XFF,0XFF,0XFC,0X3F,0X87,0XF0,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFC,0X3F,0X87,0XF0,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X3F,0X87,
0XF0,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X1F,0XC7,0XF1,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFE,0X1F,0XC3,0XE1,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X1F,
0XC3,0XE1,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X0F,0XC3,0XE1,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFE,0X0F,0XC3,0XE1,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,
0X0F,0XE3,0XE1,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X0F,0XE3,0XE1,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X0F,0XE3,0XE1,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFE,0X0F,0XC3,0XE1,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X0F,0XC3,0XE1,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X1F,0XC3,0XF1,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFE,0X1F,0XC3,0XF0,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X1F,0XC7,0XF0,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X3F,0X87,0XF0,0XFF,0XFF,0XFF,0XC0,0XFF,
0XFF,0XFF,0XF8,0X3F,0X87,0XF0,0XFF,0XFF,0XFF,0X00,0X3F,0XFF,0XFF,0XF8,0X3F,0X87,
0XF0,0XFF,0XFF,0XFE,0X00,0X1F,0XFF,0XFF,0XF0,0X7F,0X87,0XF8,0X7F,0XFF,0XFC,0X00,
0X0F,0XFF,0XFF,0XF0,0XFF,0X0F,0XF8,0X7F,0XFF,0XF8,0X00,0X07,0XFF,0XFF,0XE0,0XFF,
0X0F,0XF8,0X7F,0XFF,0XF8,0X00,0X07,0XFF,0XFF,0XC1,0XFF,0X0F,0XFC,0X7F,0XFF,0XF8,
0X00,0X03,0XFF,0XFF,0X83,0XFF,0X1F,0XFC,0X7F,0XFF,0XF0,0X00,0X03,0XFF,0XFF,0X07,
0XFF,0X1F,0XFC,0X3F,0XFF,0XF0,0X00,0X03,0XFF,0XFE,0X0F,0XFE,0X1F,0XFE,0X1F,0XFF,
0XF0,0X00,0X03,0XFF,0XFC,0X1F,0XFC,0X3F,0XFE,0X1F,0XFF,0XF0,0X00,0X03,0XFF,0XF0,
0X3F,0XFC,0X3F,0XFF,0X0F,0XFF,0XF0,0X00,0X03,0XFF,0X80,0XFF,0XF8,0X7F,0XFF,0X07,
0XFF,0XF8,0X00,0X07,0XFF,0X83,0XFF,0XF0,0X7F,0XFF,0X87,0XFF,0XF8,0X00,0X07,0XFF,
0XCF,0XFF,0XF0,0XFF,0XFF,0XC3,0XFF,0XFC,0X00,0X0F,0XFF,0XFF,0XFF,0XE0,0XFF,0XFF,
0XC1,0XFF,0XFE,0X00,0X1F,0XFF,0XFF,0XFF,0XC1,0XFF,0XFF,0XE0,0XFF,0XFF,0X00,0X3F,
0XFF,0XFF,0XFF,0XC3,0XFF,0XFF,0XF0,0XFF,0XFF,0XC0,0XFF,0XFF,0XFF,0XFF,0X87,0XFF,
0XFF,0XF0,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X07,0XFF,0XFF,0XF8,0X3F,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFE,0X0F,0XFF,0XFF,0XFC,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X1F,
0XFF,0XFF,0XFE,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X3F,0XFF,0XFF,0XFF,0X03,0XFF,
0XFF,0XFF,0XFF,0XFF,0XE0,0X7F,0XFF,0XFF,0XFF,0X81,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,
0XFF,0XFF,0XFF,0XFF,0XC0,0X7F,0XFF,0XFF,0XFF,0XFF,0X01,0XFF,0XFF,0XFF,0XFF,0XF0,
0X3F,0XFF,0XFF,0XFF,0XFE,0X07,0XFF,0XFF,0XFF,0XFF,0XF8,0X0F,0XFF,0XFF,0XFF,0XF8,
0X0F,0XFF,0XFF,0XFF,0XFF,0XFE,0X07,0XFF,0XFF,0XFF,0XF0,0X1F,0XFF,0XFF,0XFF,0XFF,
0XFF,0X00,0X3F,0XFF,0XFE,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X01,0XFF,0XC0,
0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X00,0X07,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFE,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,
0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,};

const unsigned char gImage_R1[2024] PROGMEM = { /* 0X81,0X01,0XB8,0X00,0X58,0X00, */
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XE3,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,
0X00,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,0X01,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X00,0X0F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,
0X00,0X00,0X00,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,0X00,0X00,0X01,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,
0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X00,0X00,0X00,
0X1F,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X00,0X00,0X00,0X07,0XFF,0XFF,0XFF,0XFF,
0XE0,0X00,0X00,0X00,0X00,0X00,0X03,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,0X00,0X00,0X00,
0X00,0X00,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X3F,0X00,0X00,0X00,0X00,0XFF,0XFF,0XFF,
0XFF,0X00,0X00,0XFF,0XC0,0X00,0X00,0X00,0X7F,0XFF,0XFF,0XFE,0X00,0X01,0XFF,0XE0,
0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFE,0X00,0X03,0XFF,0XF0,0X00,0X00,0X00,0X3F,0XFF,
0XFF,0XFC,0X00,0X07,0XFF,0XF8,0X00,0X00,0X00,0X1F,0XFF,0XFF,0XF8,0X00,0X07,0XFF,
0XF8,0X00,0X30,0X00,0X0F,0XFF,0XFF,0XF8,0X00,0X07,0XFF,0XFC,0X00,0X7C,0X00,0X0F,
0XFF,0XFF,0XF0,0X00,0X0F,0XFF,0XFC,0X00,0X7F,0X00,0X07,0XFF,0XFF,0XE0,0X00,0X0F,
0XFF,0XFC,0X00,0X0F,0XC0,0X03,0XFF,0XFF,0XE0,0X00,0X0F,0XFF,0XFC,0X00,0X03,0XE0,
0X03,0XFF,0XFF,0XC0,0X00,0X0F,0XFF,0XFC,0X00,0X00,0XF8,0X01,0XFF,0XFF,0X80,0X00,
0X0F,0XFF,0XFC,0X00,0X00,0X7C,0X00,0XFF,0XFF,0X80,0X00,0X07,0XFF,0XF8,0X00,0X00,
0X3E,0X00,0XFF,0XFF,0X80,0X00,0X07,0XFF,0XF8,0X00,0X00,0X1E,0X00,0XFF,0XFF,0X80,
0X00,0X03,0XFF,0XF0,0X00,0X00,0X0F,0X00,0XFF,0XFF,0X80,0X00,0X01,0XFF,0XE0,0X00,
0X00,0X07,0X80,0X7F,0XFF,0X00,0X00,0X00,0XFF,0XC0,0X00,0X00,0X07,0X80,0X7F,0XFF,
0X00,0X00,0X00,0X3F,0X00,0X00,0X00,0X03,0XC0,0X7F,0XFF,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X03,0XC0,0X7F,0XFF,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X03,0XC0,0X7F,
0XFF,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X01,0XE0,0X3F,0XFE,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X01,0XE0,0X3F,0XFE,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X01,0XE0,
0X3F,0XFE,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X01,0XF0,0X3F,0XFE,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X01,0XF0,0X3F,0XFE,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X01,
0XF0,0X1F,0XFE,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X01,0XF0,0X1F,0XFE,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X01,0XF0,0X1F,0XFE,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X01,0XF0,0X3F,0XFE,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X01,0XF0,0X3F,0XFE,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X01,0XE0,0X3F,0XFE,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X01,0XE0,0X3F,0XFF,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X03,0XE0,0X3F,0XFF,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X03,0XC0,0X7F,0XFF,0X00,0X00,0X00,0X3F,0X00,
0X00,0X00,0X07,0XC0,0X7F,0XFF,0X00,0X00,0X00,0XFF,0XC0,0X00,0X00,0X07,0XC0,0X7F,
0XFF,0X00,0X00,0X01,0XFF,0XE0,0X00,0X00,0X0F,0X80,0X7F,0XFF,0X80,0X00,0X03,0XFF,
0XF0,0X00,0X00,0X0F,0X00,0XFF,0XFF,0X80,0X00,0X07,0XFF,0XF8,0X00,0X00,0X1F,0X00,
0XFF,0XFF,0X80,0X00,0X07,0XFF,0XF8,0X00,0X00,0X3E,0X00,0XFF,0XFF,0X80,0X00,0X07,
0XFF,0XFC,0X00,0X00,0X7C,0X00,0XFF,0XFF,0X80,0X00,0X0F,0XFF,0XFC,0X00,0X00,0XF8,
0X00,0XFF,0XFF,0XC0,0X00,0X0F,0XFF,0XFC,0X00,0X01,0XF0,0X01,0XFF,0XFF,0XE0,0X00,
0X0F,0XFF,0XFC,0X00,0X03,0XE0,0X03,0XFF,0XFF,0XE0,0X00,0X0F,0XFF,0XFC,0X00,0X0F,
0XC0,0X03,0XFF,0XFF,0XF0,0X00,0X0F,0XFF,0XFC,0X00,0X7F,0X00,0X07,0XFF,0XFF,0XF8,
0X00,0X07,0XFF,0XF8,0X00,0X7C,0X00,0X0F,0XFF,0XFF,0XF8,0X00,0X07,0XFF,0XF8,0X00,
0X30,0X00,0X0F,0XFF,0XFF,0XFC,0X00,0X03,0XFF,0XF0,0X00,0X00,0X00,0X1F,0XFF,0XFF,
0XFE,0X00,0X01,0XFF,0XE0,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0X00,0X00,0XFF,0XC0,
0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0X00,0X00,0X3F,0X00,0X00,0X00,0X00,0X7F,0XFF,
0XFF,0XFF,0X80,0X00,0X00,0X00,0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,0X00,
0X00,0X00,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X03,0XFF,
0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X00,0X00,0X00,0X07,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,
0X00,0X00,0X00,0X00,0X1F,0XFF,0XFF,0XFF,0XFF,0XFE,0X00,0X00,0X00,0X00,0X00,0X3F,
0XFF,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XC0,0X00,0X00,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X00,0X07,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X00,0X0F,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XC0,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X00,0X3F,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,};
