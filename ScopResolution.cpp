#include<iostream>
using namespace std;

string text = "Global";

int main()
{
	string text = "Local";
	//calling local variable
	cout << "Hey.. I am " << text << endl;
	//calling global variable
	cout << "Hey.. I am " << ::text << endl;
}