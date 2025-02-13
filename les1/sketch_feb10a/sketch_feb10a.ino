void setup() {
  //set pin D3 on NodeMCU as an
  // output pin so it can send out voltages
pinMode (D3, OUTPUT);
}

void loop() {
  // set a voltage on D3
digitalWrite(D3, HIGH);
//wait a second
delay(1000);
// remove voltage from D3
digitalWrite (D3, LOW);
//wait 2 seconds
delay(2000);
}
