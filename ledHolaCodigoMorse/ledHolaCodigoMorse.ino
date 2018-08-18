const int led1 =10;
int i;
void punto() {
  digitalWrite(led1, HIGH);
  delay(1000);
  digitalWrite(led1, LOW);
  delay(1000);
}
void raya() {
  digitalWrite(led1, HIGH);
  delay(2000);
  digitalWrite(led1, LOW);
  delay(1000);
}

void setup() {
pinMode(led1, OUTPUT);
for(i=0;i<4;i++) {
  punto();
}
for(i=0;i<3;i++) {
  raya();
}
punto();
raya();
for(i=0;i<2;i++) {
  punto();
}
punto();
raya();
for(i=0;i<2;i++) {
  raya();
}
for(i=0;i<2;i++) {
  punto();
}
for(i=0;i<4;i++) {
  raya();
}
punto();
raya();
for(i=0;i<2;i++) {
  punto();
}
for( i=0;i<3;i++) {
  raya();
}
}

void loop() {
  // put your main code here, to run repeatedly:



}

