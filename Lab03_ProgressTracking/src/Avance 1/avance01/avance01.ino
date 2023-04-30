
#include <PCD8544.h>

// Define los pines para conectar la pantalla LCD
#define SCLK 3
#define DIN 4
#define DC 5
#define CS 7
#define RST 6

float r1 = 1000000;
float r2 = 100000;

// A custom glyph (a smiley)...
static const byte glyph[] = { B00010000, B00110100, B00110000, B00110100, B00010000 };


static PCD8544 lcd;

void setup() {
  // PCD8544-compatible displays may have a different resolution...
  lcd.begin(84, 48);

  // Add the smiley to position "0" of the ASCII table...
  lcd.createChar(0, glyph);
}

void loop() {


 // Lee el valor del sensor de voltaje 1
  int valor_leido1 = analogRead(A0);



// Lee el valor del sensor de voltaje 2
  int valor_leido2 = analogRead(A1);

 // Lee el valor del sensor de voltaje 3
  int valor_leido3 = analogRead(A2);

// Lee el valor del sensor de voltaje 4
  int valor_leido4 = analogRead(A3);

  
  // Convierte el valor leído a un voltaje
  float voltaje1_mc = (valor_leido1 * 5.0) / 1023.0; // Suponiendo que el sensor está conectado a 5V
  float voltaje1 = (voltaje1_mc/((r2)/(r1 + r2)));
  


  // Convierte el valor leído a un voltaje
  float voltaje2_mc = (valor_leido2 * 5.0) / 1023.0; // Suponiendo que el sensor está conectado a 5V
  float voltaje2 = (voltaje2_mc/((r2)/(r1 + r2)));

  // Convierte el valor leído a un voltaje
  float voltaje3_mc = (valor_leido3 * 5.0) / 1023.0; // Suponiendo que el sensor está conectado a 5V
  float voltaje3 = (voltaje3_mc/((r2)/(r1 + r2)));

  // Convierte el valor leído a un voltaje
  float voltaje4_mc = (valor_leido4 * 5.0) / 1023.0; // Suponiendo que el sensor está conectado a 5V
  float voltaje4 = (voltaje4_mc/((r2)/(r1 + r2)));
  // Muestra el voltaje en la pantalla LCD

  lcd.setCursor(0, 0);

  lcd.print("V 1: ");
  lcd.print(voltaje1);
  lcd.print("V");

  lcd.setCursor(0, 1);
  lcd.print("V 2: ");
  lcd.print(voltaje2);
  lcd.print("V");

  lcd.setCursor(0, 2);
  lcd.print("V 3: ");
  lcd.print(voltaje3);
  lcd.print("V");


  lcd.setCursor(0, 3);
  lcd.print("V 4: ");
  lcd.print(voltaje4);
  lcd.print("V");
  
  // put your main code here, to run repeatedly:

}
