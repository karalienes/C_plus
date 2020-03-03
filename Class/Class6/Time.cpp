#include<iostream>
#include<string>
#include<fstream>
#include"Time.h"
#include<iomanip>
#include<stdexcept>
using namespace std;

Time::Time() {
	hour = 0;
	minute = 0;
	second = 0;
 }
//Time::Time(int x, int y, int z) {
//
//}

void Time::setTime(int h,int m, int s) {
	if (((h >= 0) && (h <= 24)) && ((m >= 0) && (m < 60)) && ((s >= 0) && (s < 60))) {
		hour = h;
		minute = m;
		second = s;
	}
	else {
		exit(1);
	}
}
void Time::printUniversal()const {
	cout << hour << ":" << minute << ":" << second << endl;
}
void Time::printStandart()const {
	if (hour >= 12) {
		int x = hour;
		x = x % 12;
		cout << x << ":" << minute << ":" << second << "PM"<<endl;
		
		
	}
	else {
		cout << hour << ":" << minute << ":" << second << "AM"<<endl;
	}
}
int main() {

	Time K1;
	cout << endl;
	Time k2;
	k2.printUniversal();
	k2.printStandart();
	cout << endl;
	k2.setTime(12, 45, 47);
	k2.printStandart();
	k2.printUniversal();


	return 0;
}