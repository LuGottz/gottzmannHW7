 File name myApp.cpp
   Class for controlling LEDs on the BB
   Original code by Derek Molloy
   Modified by Luke Gottzmann for CPE 422


 This program controls all four on-board LEDs and can be executed in three ways
 myApp on
 myApp off
 myApp flash  (flash at time delay intervals)
 myApp status (get the trigger status)

#includeiostream
#includefstream
#includestring
#includesstream
#include derek_LED.h

using namespace std;

#define LED_PATH sysclassledsbeaglebonegreenusr

int main(int argc, char argv[]){
   if(argc!=2){
    cout  Usage is myApp command  endl;
    	cout     command is one of on, off, flash or status  endl;
    cout   e.g. myApp flash  endl;
   }
   cout  Starting the myApp program  endl;
   string cmd(argv[1]);
   LED leds[4] = { LED(0), LED(1), LED(2), LED(3) };
   for(int i=0; i=3; i++){
  	if(cmd==on)leds[i].turnOn();
  	else if(cmd==off)leds[i].turnOff();
  	else if(cmd==flash)leds[i].flash(100); default is 50
  	else if(cmd==status)leds[i].outputState();
  	else{ cout  Invalid command!  endl; }
   }
   cout  Finished the myApp program  endl;
   return 0;
}