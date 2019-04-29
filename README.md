# Dog Treat Dispenser
This project uses Blynk and Arduino to dispense dog treats over the internet.

# Parts
* S3003 Servo or SG90 Servo
* Arduino compatible board or ESP8266. The WEMOS D1 Mini is recommended
* Blynk app with internet connected smart phone

# Usage
Create a new Blynk project in the app. Configure a Push button to use V1. Optionally, add a slider that uses V3 with values 0 to 180.

Upload the sketch to an internet connected Arduino or ESP8266. 

Video Preview

[![Video preview](https://img.youtube.com/vi/zzCy-9AG1cU/0.jpg)](https://www.youtube.com/watch?v=zzCy-9AG1cU)

## Downloads

**[Arduino IDE](https://www.arduino.cc/en/Main/Software)**

**Blynk [Arduino Library](https://github.com/blynkkk/blynk-library/releases/latest)**

**Blynk Mobile App: 
[<img src="https://cdn.rawgit.com/simple-icons/simple-icons/develop/icons/googleplay.svg" width="18" height="18" /> Google Play](https://play.google.com/store/apps/details?id=cc.blynk) | 
[<img src="https://cdn.rawgit.com/simple-icons/simple-icons/develop/icons/apple.svg" width="18" height="18" /> App Store](https://itunes.apple.com/us/app/blynk-control-arduino-raspberry/id808760481?ls=1&mt=8)**

Optionally you can install **Blynk [Local Server](https://github.com/blynkkk/blynk-server)** and run everything locally. However, **Blynk Cloud is free** for anyone who is using Blynk for personal (non-commercial) use.


## Quickstart: Arduino

* Download the Blynk app ([App Store](https://itunes.apple.com/us/app/blynk-control-arduino-raspberry/id808760481?ls=1&mt=8), [Google Play](https://play.google.com/store/apps/details?id=cc.blynk))
* Get the Auth Token from the app
* Import this library to Arduino IDE. Guide [here](http://arduino.cc/en/guide/libraries)
* In Arduino IDE, select File -> Examples -> Blynk -> Boards_Ethernet -> Arduino_Ethernet
* Update Auth Token in the sketch and upload it to Arduino
* Connect your Arduino with Ethernet shield to the internet

## Documentation and other helpful links

[Full Blynk Documentation](http://docs.blynk.cc/#blynk-firmware) - a complete guide on Blynk features

[Community (Forum)](http://community.blynk.cc) - join a 500,000 Blynk community to ask questions and share ideas

[Help Center](http://help.blynk.cc) - helpful articles on various Blynk aspects

[Code Examples Browser](http://examples.blynk.cc) - browse examples to explore Blynk possibilities

[Official Website](https://blynk.io) 
