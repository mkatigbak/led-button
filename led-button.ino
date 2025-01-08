// Name: Mark Katigbak
// Alternate LED with button

int greenLED = 5;
int yellowLED = 4;
int redLED = 3;
int button = 11;

void setup() {
  pinMode(greenLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(redLED, OUTPUT);
  pinMode(button, INPUT);
}

void loop() {
  if (digitalRead(button) == LOW) {
    digitalWrite(greenLED, HIGH);
    delay(1000);
    digitalWrite(greenLED, LOW);

    digitalWrite(yellowLED, HIGH);
    delay(1000);
    digitalWrite(yellowLED, LOW);

    digitalWrite(redLED, HIGH);
    delay(1000);
    digitalWrite(redLED, LOW);
  }
}
