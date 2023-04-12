#define pot_pin A0

int deger=0;
void setup() {

  Serial.begin(9600);//arduinodan bilgisayara seri haberleşme başlatmak için
  Serial.println("pot deger okuma");



}

void loop() {

  deger = analogRead(pot_pin);
  float gerilim = (5.00/1024.00)*deger;
  Serial.println(gerilim);
  delay(100);
}
