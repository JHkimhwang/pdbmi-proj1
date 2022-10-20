// Code used for one flexiforce sensor: Illuminates LED and powers vibrational motor
// when a pressure threshold is reached

int s1 = A0;
int s2 = A1;
int s3 = A2;
int s4 = A3;

int L1 = 3; // LED output for sensor 1
int T1 = 10; // Threshold for sensor 1

void setup() {
  Serial.begin(9600);
  pinMode(L1, OUTPUT);

}

void loop() {

  // Sensor Input Data & Read Out
  int sensor1 = analogRead(s1); 
  Serial.print("Sensor 1: ");
  Serial.println(sensor1);

  int sensor2 = analogRead(s2); 
  Serial.print("Sensor 2: ");
  Serial.println(sensor2);

  int sensor3 = analogRead(s3); 
  Serial.print("Sensor 3: ");
  Serial.println(sensor3);

  int sensor4 = analogRead(s4); 
  Serial.print("Sensor 4: ");
  Serial.println(sensor4);

  delay(500);

// Threshold Code
  if (sensor1 > 10) {
    digitalWrite(L1, HIGH);
  }

  else {
    digitalWrite(L1, LOW);

  }

}
