#include<iostream>
using namespace std;
//this is the abstract class
class Base {
public:
	//this call a pure virtual or abstract function
	virtual void myFun() = 0;

public:
	void myFun2() {
		cout << "This is a normal function" << endl;
	}
};

class Derived : public Base {
//implementation of abstract or virtual function
public:
	void myFun() {
		cout << "This is the body of that virtual function" << endl;
	}
};

int main() {
	Derived obj;
	obj.myFun();
	obj.myFun2();
}