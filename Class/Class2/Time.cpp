
#include<iostream>
#include<iomanip>
#include<stdexcept>
#include"Time.h"

using namespace std;

Time::Time(int hour, int minute, int second) {

	setTime(hour, minute, second);
}
void Time::setTime(int h, int m, int s) {
	setHour(h);
	setMinute(m);
	setSecond(s);
}
void Time::setHour(int h) {
	if (h < 24) {
		hour = h;
	}
	else
		exit(1);
}
void Time::setMinute(int m) {
	if (m < 24) {
		minute = m;
	}
	else
		exit(1);

}
void Time::setSecond(int s) {
	if (s < 24) {
		second = s;
	}
	else
		exit(1);
}
unsigned int Time::getHour()const {
	return hour;
}
unsigned int Time::getMinute()const {
	return minute;
}
unsigned int Time::getSecond()const {
	return second;
}

void Time::printUniversal()const {

	cout << getHour() << ":" << getMinute << ":" << getSecond;

}
void Time::printStandart()const {
	if (getHour() > 12) {
		
		cout << getHour() % 12 << ":" << getMinute() << ":" << getSecond << "PM" << endl;
	}
	else {
		cout << getHour() << ":" << getMinute() << ":" << getSecond << "AM" << endl;
	}

}

int main() {

	Time d1;
	Time d2(2);
	Time d3(2, 4);
	Time d4(2, 16, 34);
	
	return 0;
}



