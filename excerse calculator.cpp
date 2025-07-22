//calculator
#include<iostream>
using namespace std;
int main(){
	int x, y;
	char oprater;
	cout<<"enter first number";
	cin>>x;
	cout<<"choose oprater(+-*/)";
	cin>>oprater;
	cout<<"enter second number";
	cin>>y;
	if (oprater == '+'){ cout<<"sum: "<<x + y<<endl;}
	else if (oprater == '-'){ cout<<"sub:"<<x - y<<endl;}
	else if (oprater == '*'){ cout<<"mult: "<<x * y<<endl;}
	else if (oprater == '/'){cout<<"div: "<<x / y<<endl;}
	else {cout<<"invalide!";}

	
	
	
	
}