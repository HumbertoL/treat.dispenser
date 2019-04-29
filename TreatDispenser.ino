#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <Servo.h>

// Auth Token from the Blynk App.
char auth[] = "{InsertAuthTokenHere}";

// WiFi credentials.
char ssid[] = "{InsertSSID}";
char pass[] = "{InsertPassword}";

// Declare the Servo pin
#define SERVO_PIN D7
Servo Servo1;

void setup() {
  // Attach the servo to the specified pin number
  pinMode(SERVO_PIN, OUTPUT);
  Blynk.begin(auth, ssid, pass);
}
void loop() {
  Blynk.run();
}


// Handler for Virtual Pin 1 (Button)
BLYNK_WRITE(V1)
{
  int pinValue = param.asInt();

  // Virtual button was pressed, dispense treat
  if (pinValue == 1) {
    Servo1.attach(SERVO_PIN);

    // Reset position
    Servo1.write(5);
    delay(500);
    
    // Turn servo position all the way around
    Servo1.write(180);

    // Wait for servo to finish moving
    delay(2000);


    // Return servo to starting position
    Servo1.write(5);

    // Wait for servo to finish moving
    delay(1500);

    Servo1.detach();
  }
}

// Handler for virtual slider, used for testing positions
BLYNK_WRITE(V3)
{
  int pinValue = param.asInt();
  
  Servo1.attach(SERVO_PIN);
  Servo1.write(pinValue);
  delay(500);
  Servo1.detach();

}

