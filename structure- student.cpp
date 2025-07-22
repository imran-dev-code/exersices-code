#include<iostream>
using namespace std;
struct book {string title;string author;float price;
};
     int main(){
     	book obj1;
     	obj1.title = "the oscean";
     	obj1.author = "jhon";
     	obj1.price = 300.25;
     	cout<<obj1.title<<endl;
     	cout<<obj1.author<<endl;
     	cout<<obj1.price<<endl;
	 }