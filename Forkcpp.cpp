#include<iostream>
// this only can be appliable in auix system
#include<unistd.h>
using namespace std;
int main() {
	fork();
	cout << "Hello" << endl;
}