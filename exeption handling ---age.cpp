#include<iostream>
using namespace std;
int main() {
int age; 
cout<<"enter your age"<<endl;
cin>>age;
try{

    if (age < 0 || age > 150) { throw"invalide age!"; }
	cout<<"age= "<<age<<endl; }
	catch (const char* errorMSG) {cout<<"error!"<<errorMSG<<endl;
	} return 0;
	}
