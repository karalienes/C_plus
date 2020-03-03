#include<string>
using namespace std;
#ifndef CREATE_H
#define CREATE_H

class Create {
public:
	Create(int, string);
	~Create();
private:
	int ObjectId;
	string message;
};
#endif // !CREATE_H
