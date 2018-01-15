#ifndef PINCONTROL_H
#define PINCONTROL_H

#define POSITIVE 1
#define NEGATIVE 0


class pinControl
{
  public:
	byte pin; 
	byte p;
	pinControl(byte _pin, byte _p = POSITIVE)
	{
		pin = _pin;
		p = _p;
		pinMode(pin, OUTPUT);
		off();
	}
	void on()
	{
		if (p) digitalWrite(pin, HIGH);
		else digitalWrite(pin, LOW);
	}
	void off()
	{
		if (!p) digitalWrite(pin, HIGH);
		else digitalWrite(pin, LOW);
	}
	void set(byte st)
	{
		if (st) on();
		else off();
	}
	byte get()
	{
		return digitalRead(pin);
	}
	void invert()
	{
		digitalWrite(pin, !digitalRead(pin));
	}
};

#endif
 