#define PERIOD 200

const int led1=11;
const int led2=10;
const int led3=9;
const int led4=6;
const int led5=5;
const int led6=3;


int ledState1 = LOW;   
int ledState2 = LOW;  
int ledState3 = LOW;  
int ledState4 = LOW; 
int ledState5 = LOW;
int ledState6 = LOW;

unsigned long previousMillis1 = 0;
unsigned long previousMillis2 = 0;
unsigned long previousMillis3 = 0;
unsigned long previousMillis4 = 0;
unsigned long previousMillis5 = 0;
unsigned long previousMillis6 = 0;


const long interval1 = 1000000;
const long interval2 = 50000; 
const long interval3 = 100000; 
const long interval4 = 250000;
const long interval5 = 500000;
const long interval6 = 750000;

void setup() {
  
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);

  digitalWrite(led1,HIGH);
}


void loop() {
  unsigned long currentMillis = micros();

  if (currentMillis - previousMillis1 >= interval1) {
    previousMillis1 = currentMillis;
    if (ledState1 == LOW) {
      ledState1 = HIGH;
    } else {
      ledState1 = LOW;
    }
    
    digitalWrite(led1, ledState1);
  }
  
  if (currentMillis - previousMillis2 >= interval2) {
    previousMillis2 = currentMillis;
    if (ledState2 == LOW) {
      ledState2 = HIGH;
    } else {
      ledState2 = LOW;
    }   
  }
  digitalWrite(led2, ledState2);
  if (currentMillis - previousMillis3 >= interval3) {
    previousMillis3 = currentMillis;
    if (ledState3 == LOW) {
      ledState3 = HIGH;
    } else {
      ledState3 = LOW;
    }
    digitalWrite(led3, ledState3);
  }
  if (currentMillis - previousMillis4 >= interval4) {
    previousMillis4 = currentMillis;
    if (ledState4 == LOW) {
      ledState4 = HIGH;
    } else {
      ledState4 = LOW;
    }
    digitalWrite(led4, ledState4);
  }
  if (currentMillis - previousMillis5 >= interval5) {
    previousMillis5 = currentMillis;
    if (ledState5 == LOW) {
      ledState5 = HIGH;
    } else {
      ledState5 = LOW;
    }
    digitalWrite(led5, ledState5);
  }
  if (currentMillis - previousMillis6 >= interval6) {
    previousMillis6 = currentMillis;
    if (ledState6 == LOW) {
      ledState6 = HIGH;
    } else {
      ledState6 = LOW;
    }
    digitalWrite(led6, ledState6);
  }
}
