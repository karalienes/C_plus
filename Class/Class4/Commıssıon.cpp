#include<iostream>
#include<stdexcept>
#include"commision.h"

using namespace std;

Commission::Commission(const string &first, const string &last, const string &ssn,double sales,double rate) {
	setFirstName(first);
	setLastName(last);
	setSocialSecurityNumber(ssn);
	setGrossSales(sales);
	setCommissionRate(rate);

}
void Commission::Commission