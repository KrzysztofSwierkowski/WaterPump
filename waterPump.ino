bool digitalValue;
int analogValue;

void setup() {
  pinMode(10,OUTPUT);//ustalenie pinu 11 jako pin wyjścia

 // Serial.begin(9600);
}
void loop() {
  int wilg = analogRead(A0);//zmienna dla pomiaru wilgotności
  int wil = map(wilg,0,1024,100,0);//przekalkulowanie wartości na procentowe
//Serial.println(analogRead(A0));
//Serial.println(wil);
delay(1000);
  if(wil < 60)//jeśli wilgotność jest mniejsza niż 60%
  {
    digitalWrite(10,HIGH);//pompa wraz z ledem włącza się
    //Serial.println(digitalRead(11));
    delay(8000);//na 8 sekund
    digitalWrite(10,LOW);//po czym pompa z diodą się wyłączają
   // Serial.println(digitalRead(11));
     }
  else// jeśli nie
  {
     digitalWrite(10,LOW);//pompa i dioda zostają wyłączone
 
  }

  delay(1800000);//uC czeka 30 minut na kolejny pomiar
}
