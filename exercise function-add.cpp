//function exercise
#include<iostream>
using namespace std;

int add(int x, int y) {return x + y;
}
	int main(){
		int x, y;
		cout<<"enter first number";
		cin>>x;
		cout<<"enter second number";
		cin>>y;
		
		cout<<"the sum is: "<<add(x, y)<<endl;
	}
