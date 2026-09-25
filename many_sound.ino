int c=9,d=8,e=7,f=6;
void setup() {
  pinMode(13,OUTPUT);
  pinMode(c,INPUT_PULLUP);
  pinMode(d,INPUT_PULLUP);
  pinMode(e,INPUT_PULLUP);
  pinMode(f,INPUT_PULLUP);
}
void loop() {
if(digitalRead(c)==0)
{tone(13,9261,150);}
if(digitalRead(d)==0)
{tone(13,7571,150);}
if(digitalRead(e)==0)
{tone(13,5991,150);}
if(digitalRead(f)==0)
{tone(13,3741,150);}
}