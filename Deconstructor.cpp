#include<iostream>
using namespace std;
class testclass
{
public:
	//Constructors are special class functions which performs initialization of every object
	testclass()
	{
		cout << "This is the constructor!" << endl;
	}

	//Destructor on the other hand is used to destroy the class object
	~testclass()
	{
		cout << "This is the deconstructor or destructor" << endl;
	}

	void test()
	{
		cout << "This is the ctor!" << endl;
	}
};

int main()
{
	testclass obj;
	obj.test();
	
}