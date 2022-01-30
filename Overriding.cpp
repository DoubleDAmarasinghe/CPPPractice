#include<iostream>
using namespace std;

class ParentClass {
public:
	void myFunction() {
		cout << "This is the Overridden function" << endl;
	}
};

class ChildClass : public ParentClass {
	//method overriding
public:
	void myFunction() {
		cout << "The method has been Overrided" << endl;
	}
};

int main() {
	ChildClass obj;
	obj.myFunction();
	//access the method of overridden class
	obj.ParentClass::myFunction();
}