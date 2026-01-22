// #define soundsensor D3
// #define led D7
// void setup() 
// {
//   // put your setup code here, to run once:
//   pinMode(led, OUTPUT);
//   pinMode(soundsensor, INPUT);
//   Serial.begin(9600);
//   // Blynk.begin(auth, ssid, psd);
// }

// void loop() 
// {
//   // put your main code here, to run repeatedly:
//   int sensorval = digitalRead(soundsensor);
//   Serial.println(sensorval);
//   if(sensorval == 1)
//   {
//      digitalWrite(led, HIGH);
//      delay(1000);
//   }
//   else
//   {
//     digitalWrite(led, LOW);
//     delay(1000);
//     // digitalWrite(led, HIGH);
//   }
// }


#define soundsensor D3
#define led D7

void setup() 
{
  pinMode(led, OUTPUT);
  pinMode(soundsensor, INPUT);
  Serial.begin(9600);
}

void loop() 
{
  int sensorval = digitalRead(soundsensor);
  Serial.println(sensorval);

  if(sensorval == 1) {
    digitalWrite(led, HIGH);   // LED ON when sound detected
  } else {
    digitalWrite(led, LOW);    // LED OFF when silent
  }

  delay(50); // small delay for stability
}
