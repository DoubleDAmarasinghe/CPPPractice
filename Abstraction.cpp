#include<iostream>
using namespace std;
//this is the abstract class
class Base {
public:
	//this call a pure virtual function
	virtual void myFun() = 0;
};

class Derived : public Base {
public:
	void myFun() {
		cout << "This is the body of that virtual function" << endl;
	}
};

int main() {
	Derived obj;
	obj.myFun();
}