#define btn 8
#define led 10

int btn_durum=0;

void setup() {
  // put your setup code here, to run once:
  pinMode(btn,INPUT);
  pinMode(led,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  btn_durum=digitalRead(btn);

  if(btn_durum==1){
      digitalWrite(led,HIGH);
  }else{
    digitalWrite(led,LOW);
  }

}
