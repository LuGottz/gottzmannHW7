/** File name: myBlink.cpp
*   Class for controlling LEDs on the BB
*   Original code by Derek Molloy
*   Modified by Luke Gottzmann for CPE 422
*/

// This program controls all four on-board LEDs and can be executed in three ways:
// myBlink on
// myBlink off
// myBlink flash  (flash at time delay intervals)
// myBlink blink a n (blink LED a on and off for 1 second n times)
// myBlink status (get the trigger status)

#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
#include<unistd.h>
#include "derek_LED.h"

using namespace std;

#define LED_PATH "/sys/class/leds/beaglebone:green:usr"

int main(int argc, char* argv[]){
   if(argc!=2){
cout << "Usage is myBlink <command>" << endl;
    	cout << "   command is one of: on, off, flash, blink, or status" << endl;
cout << " e.g. myBlink blink 2 5" << endl;
   }
   cout << "Starting the myBlink program" << endl;
   string cmd(argv[1]);
   LED leds[4] = { LED(0), LED(1), LED(2), LED(3) };
   for(int i=0; i<=3; i++){
  	if(cmd=="on")leds[i].turnOn();
  	else if(cmd=="off")leds[i].turnOff();
  	else if(cmd=="flash")leds[i].flash("100"); //default is "50"
else if(cmd=="blink")leds[i].blink(num);
  	else if(cmd=="status")leds[i].outputState();
  	else{ cout << "Invalid command!" << endl; }
   }
   cout << "Finished the myBlink program" << endl;
   return 0;
}