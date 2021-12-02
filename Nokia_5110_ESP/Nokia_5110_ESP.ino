#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_PCD8544.h>

Adafruit_PCD8544 display = Adafruit_PCD8544(D5, D7, D6, D1, D2); // WEMOS D1 MİNİ ve NodeMCU için geçerli

void setup() {
  display.begin();                //NOKIA 5110 BAŞLATMA

  display.clearDisplay();       //  Ekran temizleme
  display.setRotation(0);      //0  DERECE DÖNÜŞ YÖNÜ
  //display.setRotation(1);   //90  DERECE DÖNÜŞ YÖNÜ
  //display.setRotation(2);  //180  DERECE DÖNÜŞ YÖNÜ
  //display.setRotation(3); //270   DERECE DÖNÜŞ YÖNÜ

  display.setTextColor(BLACK, WHITE); //Yazı rengini ayarlama SAADECE BLACK de yazabilrsin ÖR: WHITE,BLACK

}

void loop() {
  display.setContrast(45);       // EKRAN KOYULUĞUNU AYARLAR
  display.setCursor(0, 0);          // Yazının lcd'de yazılacağı başlangıç noktası = (0,0): sıfırıncı satır, sıfırıncı sütün, (0,1): birinci satır sıfırıncı sütun
  display.setTextSize(1);          //1,2, 3, 4, 5 ... yazılabilir. Bu komut yazı boyutunun büyüklüğünü belirlemektedir.
  display.println("YAZI");
  display.setTextSize(2);
  display.println("TEST");
  display.display();
  display.setTextSize(1);
  display.println("Sammy_py");
  display.display();
}
