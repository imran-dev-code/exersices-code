#include<iostream>
using namespace std;
int main() {
	int a, b;
	cout<<"enter two numbers: ";
	cin>>a>>b;
	try {
		if (b == 0) { throw"you cant divide by zero";   }
		cout<<"result"<<a*b<<endl;}
		catch (const char* errorMSG) {cout<<"error: "<<errorMSG<<endl;
		} return 0;
	}
