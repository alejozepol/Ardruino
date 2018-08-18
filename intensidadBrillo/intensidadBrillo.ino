const int led1 =10;

int valorBrillo =0;
int i;

void setup() {
pinMode(led1, OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:

for (valorBrillo=0; valorBrillo<255; valorBrillo++)
{
  delay (10);
    analogWrite(led1, valorBrillo);
  }
  delay (1000);
  for (valorBrillo=255; valorBrillo < 0; valorBrillo--)
{
  delay (10);
    analogWrite(led1, valorBrillo);
  }




}

