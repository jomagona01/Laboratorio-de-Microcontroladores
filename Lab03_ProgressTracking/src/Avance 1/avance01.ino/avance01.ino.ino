#include <Adafruit_PCD8544.h>
#include <Adafruit_GFX.h>

// Define los pines para conectar la pantalla LCD
#define SCLK 13
#define DIN 11
#define DC 10
#define CS 9
#define RST 8

// Crea un objeto de la clase Adafruit_PCD8544
Adafruit_PCD8544 lcd = Adafruit_PCD8544(SCLK, DIN, DC, CS, RST);


void setup() {
   // Inicializa la pantalla LCD
  lcd.begin();
  lcd.setContrast(50);
  lcd.setBrightness(100);
  // put your setup code here, to run once:

}

void loop() {
   // Lee el valor del sensor de voltaje
  int valor_leido = analogRead(A0);
  
  // Convierte el valor leído a un voltaje
  float voltaje = (valor_leido * 5.0) / 1023.0; // Suponiendo que el sensor está conectado a 5V
  
  // Muestra el voltaje en la pantalla LCD
  lcd.clearDisplay();
  lcd.setCursor(0, 0);
  lcd.print("Voltaje: ");
  lcd.print(voltaje);
  lcd.print("V");
  
  // put your main code here, to run repeatedly:

}
