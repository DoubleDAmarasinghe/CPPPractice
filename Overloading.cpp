#include<iostream>
using namespace std;
class MyClass {
public:
	void myFunction() {
		cout << "My age is 24" << endl;
	}

	//method overloading
	void myFunction(int age) {
		cout << "My age is: " << age << endl;
	}
};

int main() {
	MyClass obj;
	obj.myFunction();
	obj.myFunction(24);
}