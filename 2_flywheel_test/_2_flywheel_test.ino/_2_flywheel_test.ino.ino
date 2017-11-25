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
  digitalWrite(enable1, HIGH);
  digitalWrite(enable2, HIGH);

  //set each motor's direction and speed
  digitalWrite(dir1, HIGH);
  analogWrite(pow1, 255);
  Serial.print(analogRead(cs1));
  Serial.print("\t");

  digitalWrite(dir2, HIGH);
  analogWrite(pow2, 255);
  Serial.println(analogRead(cs2));

}
