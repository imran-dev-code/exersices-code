#include<iostream>
using namespace std;
class car { 
public:
string name;
string color;
string brand;
};
int main(){
	car car1;
	car1.name = "BYD";
	car1.color = "black";
	car1.brand = "new";
	cout<<car1.name<<endl;
	cout<<car1.color<<endl;
	cout<<car1.brand<<endl;
}
