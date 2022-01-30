#include<iostream>
using namespace std;

class Parent1 {
public:
	void myfun1() {
		cout << "This is from Parent1 class"<<endl;
	}
};

class Parent2 {
public:
	void myfun2() {
		cout << "This is from Parent2 class" << endl;
	}
};

//single inheritance
class Child1 : public Parent1 {
public:
	void childFun() {
		cout << "This is from child class" << endl;
	}
};

//multiple inheritance
class Child2 : public Parent1, public Parent2 {

};

//multilevel inheritance
class GrandChild1 : public Child1 {
public:
	void grandChildFun() {
		cout << "This is from grand child class" << endl;
	}
};

int main() {
	//application of single inheritance
	Child1 obj1;
	obj1.myfun1();

	//application of multiple inheritance
	Child2 obj2;
	obj2.myfun1();
	obj2.myfun2();

	//application of multilevel inheritance
	GrandChild1 obj3;
	obj3.myfun1();
	obj3.childFun();
	obj3.grandChildFun();
}