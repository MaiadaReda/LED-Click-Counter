// C++ code
//
int red=10;
int yellow=8;
int green=4;
int button = 6;
int counter = 0;
int reading= 0;
void setup()
{
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(button,INPUT);
}

void loop()
{ reading= digitalRead(button);
  if(reading==HIGH){
  counter++;
  if (counter==1){
    digitalWrite(red, HIGH);
    delay(250);}
   else if (counter==2){
    digitalWrite(red, HIGH);
    digitalWrite(yellow,HIGH);
    delay(250);}
   else if (counter==3){ 
    digitalWrite(red, HIGH);
    digitalWrite(yellow,HIGH);
    digitalWrite(green,HIGH);
    delay(250);}
   else if (counter==4){
    digitalWrite(red, LOW);
    digitalWrite(yellow,LOW);
    digitalWrite(green, LOW);
    delay(500);
  }
   else{counter=0;}}
 
    }