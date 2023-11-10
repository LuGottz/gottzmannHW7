/** File name: derek_LED.h
*   Class for controlling LEDs on the BB
*   Original code by Derek Molloy
*   Modified by Luke Gottzmann for CPE 422
*/

class LED{
   private:
  	string path;
  	int number;
  	virtual void writeLED(string filename, string value);
  	virtual void removeTrigger();
   public:
  	LED(int number);
  	virtual void turnOn();
  	virtual void turnOff();
  	virtual void flash(string delayms);
  	virtual void outputState();
  	virtual ~LED();
	virtual void blink(int num);
};