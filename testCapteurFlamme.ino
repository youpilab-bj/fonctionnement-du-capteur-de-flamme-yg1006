int D0 =8; // Broche D0 du capteur
int led=9; // Broche de la LED
int buzzer=10; //Broche du buzzer
 
void setup()
{
  Serial.begin(9600);// initialisation du moniteur série
  pinMode(led,OUTPUT);
  pinMode(buzzer,OUTPUT);
  Serial.println("************************Programme de détection de feu*******************************");

  digitalWrite(buzzer,LOW);

}

void loop()
{

if(digitalRead(D0)==0)
{
  Serial.println("Feu!!!!!!!!!!!!");
  digitalWrite(led,HIGH);
  digitalWrite(buzzer,HIGH);
}else{
  //Serial.println(" pas de Feu!!!!!!!!!!!!");
  digitalWrite(led,LOW);
  digitalWrite(buzzer,LOW);
  }
  delay(100);

}
