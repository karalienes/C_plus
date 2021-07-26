#pragma once
#ifndef TIME_H
#define TIME_H

class Time {
public:
	Time();
	//Time(int x, int y, int z);
	void setTime(int, int, int);
	void printUniversal()const;
	void printStandart()const;
private:
	unsigned int hour;
	unsigned int minute; 
	unsigned int second;



};

#endif // !TIME_H

