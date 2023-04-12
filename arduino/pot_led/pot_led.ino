#define led 6
#define pot A0
int deger;

void setup() {
  
}

void loop() {

   deger = analogRead(pot);
  // deger = deger /4;
   deger = map(deger,0,1023,0,255);
   analogWrite(led,deger);

}
