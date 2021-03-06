int error;
byte vibrate = 0;

int enable1 = 11;
int pow1 = 12;
int dir1 = 13;
int cs1 = 0;

int enable2 = 8;
int pow2 = 9;
int dir2 = 10;
int cs2 = 1;


void setup() {
  Serial.begin(250000);
  //setup driver pins
  pinMode(enable1, OUTPUT);
  pinMode(pow1, OUTPUT);
  pinMode(dir1, OUTPUT);
  
  pinMode(enable2, OUTPUT);
  pinMode(pow2, OUTPUT);
  pinMode(dir2, OUTPUT);
}

void loop() {

  //enable drivers
  digitalWrite(enable2, HIGH);
  digitalWrite(enable1, LOW);

  //set each motor 2's direction and speed
  digitalWrite(dir2, LOW);
  analogWrite(pow2, 255);
  Serial.print(analogRead(cs2));
  Serial.print("\t");

}
