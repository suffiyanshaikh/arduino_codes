#include<Wire.h>
#include<Adafruit_GFX.h>
#include<Adafruit_SSD1306.h>
Adafruit_SSD1306 display(4);
//#define SCREEN_WIDTH 128
//#define SCREEN_HEIGHT 64
//Adafruit_SSD1306(SCREEN_WIDTH,SCREEN_HEIGHT,&Wire,-1);

static const unsigned char PROGMEM image1 [350] = {
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 
    0xff, 0xff, 0xf0, 0x7f, 0xff, 0xff, 0xc0, 
    0xff, 0xff, 0x80, 0x1f, 0xff, 0xff, 0xc0, 
    0xff, 0xff, 0x00, 0x0f, 0xff, 0xff, 0xc0, 
    0xff, 0xfe, 0x00, 0x00, 0x7f, 0xff, 0xc0, 
    0xff, 0xfc, 0x00, 0x31, 0xdf, 0xff, 0xc0, 
    0xff, 0xfe, 0x00, 0x7c, 0xff, 0xff, 0xc0, 
    0xff, 0xfa, 0x01, 0xfc, 0x1f, 0xff, 0xc0, 
    0xff, 0xf9, 0xfd, 0xbc, 0x4f, 0xff, 0xc0, 
    0xff, 0xf8, 0x03, 0x7f, 0x37, 0xff, 0xc0, 
    0xff, 0xf8, 0x0f, 0xfc, 0xdb, 0xff, 0xc0, 
    0xff, 0xf8, 0x03, 0xfc, 0x4b, 0xff, 0xc0, 
    0xff, 0xf8, 0x07, 0xfd, 0x2b, 0xff, 0xc0, 
    0xff, 0xf8, 0x0b, 0xf4, 0xaf, 0xff, 0xc0, 
    0xff, 0xf8, 0x07, 0xee, 0xbf, 0xff, 0xc0, 
    0xff, 0xfc, 0x76, 0x06, 0xbf, 0xff, 0xc0, 
    0xff, 0xfe, 0x40, 0x0f, 0xbf, 0xff, 0xc0, 
    0xff, 0xff, 0x00, 0x0d, 0xff, 0xff, 0xc0, 
    0xff, 0xff, 0x00, 0x1f, 0xff, 0xff, 0xc0, 
    0xff, 0xff, 0xc0, 0x1f, 0xff, 0xff, 0xc0, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 
    0xff, 0xff, 0xff, 0x7d, 0xff, 0xff, 0xc0, 
    0xff, 0xff, 0xff, 0xf7, 0xff, 0xff, 0xc0, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 
    0xf7, 0xcf, 0x6f, 0xff, 0xff, 0xef, 0xc0, 
    0xf7, 0xfb, 0xff, 0xbf, 0xff, 0xff, 0xc0, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 
    0xfd, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xc0, 
    0xff, 0xff, 0xff, 0xff, 0x6f, 0x6f, 0xc0, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0
};
void setup()
{
  display.begin(SSD1306_SWITCHCAPVCC,0X3C);
  display.clearDisplay();
  display.drawBitmap(0, 0, image1, 50, 50, WHITE);
 display.display();
}

void loop()
{
 
}
