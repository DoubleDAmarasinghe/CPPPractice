#include<iostream>

//For namespace
std::string text = "Global";

class A
{
public:
	void testfun();
	int a = 50;

	static int b;

};

class B
{
	public:
	int a = 25;
};

class C: public A, public B
{
public:
	void newfun()
	{
		/*In case of multiple Inheritance :
		If same variable name exists in two ancestor classes, we can use scope resolution operator to distinguish.*/
		std::cout << A::a << std::endl;
		std::cout << B::a << std::endl;

	}
};

//To define a function outside a class.
void A::testfun()
{
	std::cout << "This is from testfun" << std::endl;
}

int A::b = 7;

int main()
{
	std::string text = "Local";
	//calling local variable
	std::cout << "Hey.. I am " << text << std::endl;
	//To access a global variable when there is a local variable with same name
	std::cout << "Hey.. I am " << ::text << std::endl;

	//To access a class’s static variables.
	std::cout << A::b<< std::endl;

	A obj;
	obj.testfun();

	C obj2;
	obj2.newfun();
}