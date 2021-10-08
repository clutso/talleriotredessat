//https://randomnerdtutorials.com/esp8266-pinout-reference-gpios/
//38482885
#define MY_LED 2

void setup() {
Serial.begin(115200);
pinMode(MY_LED ,OUTPUT);
randomSeed(analogRead(0));
delay(1000);
}

void loop() {
static bool state= false;
uint32_t randNumber = random(120000,600000);
state?state=false:state=true; 

digitalWrite(MY_LED, state);
Serial.printf("current state: %d \n waitting %d seconds until next number \n", state, randNumber );

delay(randNumber);
}
