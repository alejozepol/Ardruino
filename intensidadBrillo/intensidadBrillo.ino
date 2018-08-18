const int led1 =10;

int valorBrillo =50;
int i;

void setup() {
pinMode(led1, OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:

analogWrite(led1, valorBrillo);

}

