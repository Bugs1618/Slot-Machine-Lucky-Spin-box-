#include <Adafruit_GFX.h>
#include <Adafruit_ST7735.h>
#include <LiquidCrystal.h>  // Biblioteca para o LCD

// Definição dos pinos para os displays TFT
// Display 1
#define CS1 10
#define DC1 9
#define RST1 8

// Display 2
#define CS2 7
#define DC2 6
#define RST2 5

// Display 3
#define CS3 4
#define DC3 3
#define RST3 2

// Definição dos pinos para o LCD
#define RS 31
#define E 33
#define D4 35
#define D5 37
#define D6 39  
#define D7 41

// Define os pinos para cada cor do LED RGB
#define RED_PIN 30
#define GREEN_PIN 28
#define BLUE_PIN 32

// Define os pinos para cada botão
#define BUTTON_PIN 22
#define BUTTON_PIN 24

//Define o pino do buzzer
#define BUZZER_PIN 12

// Criação das instâncias dos displays
Adafruit_ST7735 display1 = Adafruit_ST7735(CS1, DC1, RST1);
Adafruit_ST7735 display2 = Adafruit_ST7735(CS2, DC2, RST2);
Adafruit_ST7735 display3 = Adafruit_ST7735(CS3, DC3, RST3);
LiquidCrystal lcd(RS, E, D4, D5, D6, D7); // Instância para o LCD

void setup() {
  // Inicialize os displays TFT
  display1.initR(INITR_BLACKTAB); // Ou INITR_GREENTAB, dependendo do display
  display2.initR(INITR_BLACKTAB);
  display3.initR(INITR_BLACKTAB);

  // Inicialize o LCD
  lcd.begin(16, 2); // Defina o tamanho do LCD, 16x2
  delay(1000);
  lcd.clear();
  lcd.print("Display 4");  // Inicialize o LCD com texto "Display 4"

  // Configuração inicial dos displays TFT
  display1.fillScreen(ST77XX_BLACK);
  display2.fillScreen(ST77XX_BLACK);
  display3.fillScreen(ST77XX_BLACK);

  display1.setCursor(0, 0);
  display1.setTextColor(ST77XX_WHITE);
  display1.setTextSize(1);
  display1.println("Display 1");

  display2.setCursor(0, 0);
  display2.setTextColor(ST77XX_WHITE);
  display2.setTextSize(1);
  display2.println("Display 2");

  display3.setCursor(0, 0);
  display3.setTextColor(ST77XX_WHITE);
  display3.setTextSize(1);
  display3.println("Display 3");
}

void loop() {
  // Atualize os displays TFT com informações diferentes
  display1.setCursor(0, 20);
  display1.println(millis() / 1000);

  display2.setCursor(0, 20);
  display2.println(millis() / 500);

  display3.setCursor(0, 20);
  display3.println(millis() / 100);

  // Atualize o LCD 
  lcd.setCursor(0, 1);  // Segunda linha do LCD

  delay(100);
}
