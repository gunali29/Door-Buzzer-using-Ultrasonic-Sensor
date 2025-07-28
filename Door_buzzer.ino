int ultrasonic = 0;

long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);  // Clear the trigger
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
    return pulseIn(echoPin, HIGH);
}

void setup()
{
  Serial.begin(9600);
  pinMode(10, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
  ultrasonic = 0.01723 * readUltrasonicDistance(6, 4);
  Serial.println(ultrasonic);
  if (ultrasonic < 120) {
    tone(10, 523, 100); 
  } else {
    digitalWrite(10, LOW);
  }
  delay(10); 
}