#pragma once
#ifndef COMMISSION_H
#define COMMISSION_H
#include<string>
using namespace std;

class Commission {
public:
	Commission(const string &, const string &,const string &, double = 0.0, double = 0.0);
	void setFirstName(const string &);
	string getFirstName()const;
	void setLastName(const string&);
	string getLastName()const;
	void setSocialSecurityNumber(const string&);
	string getSocialSecurtiyNumber()const;
	void setGrossSales(double);
	double getGrossSales()const;
	void setCommissionRate(double);
	double getCommissionRate()const;
	double earning()const;
	void print()const;
private:
	string FirstName;
	string LastName;
	string SocialSecurityNumber;
	double GrossSales;
	double CommissionRate;

};
#endif // !COMMISSION_H

