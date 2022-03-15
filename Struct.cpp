#include<iostream>
using namespace std;

struct MyStruct {
public:
	void myfun(int num){
		cout << "Number is :" << num << endl;
	}
};

int main() {
	struct MyStruct obj;
	obj.myfun(100);
}