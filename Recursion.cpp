#include<iostream>
using namespace std;

int factorialfind(int x) 
{
	if(x==1)
	{
		return 1;
	}

	else
	{
		return x* factorialfind(x - 1);
	}
}

int main() 
{
	cout << factorialfind(5) << endl;
}

