#include <LiquidCrystal_I2C.h>
int sensor;

LiquidCrystal_I2C lcd(0x27,16,2); // configuración de la pantalla - Direcciones (0x3f,16,2) ||(0x20,16,2) 


void setup() {
Serial.begin(9600);
lcd.init(); // inicializar pantalla
lcd.backlight(); //luz de fondo
lcd.clear();

}

void loop() {

  sensor = digitalRead(8);


if(sensor==0){

    lcd.clear();
    lcd.setCursor(4,0);
    lcd.print("OBJETO");
    lcd.setCursor(3,1);
    lcd.print("DETECTADO"); 

   delay(1000);
  
}
else{
  lcd.clear();
  lcd.setCursor(1,0);
    lcd.print("NO HAY NINGUN");
    lcd.setCursor(4,1);
    lcd.print("OBJETO");
     delay(500);
    
}

  
      
    
}
