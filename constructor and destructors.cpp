#include<iostream>
using namespace std;
class book{
	public:
		book() {
		cout<<"bookis opened"<<endl;
		}
		~book() {
		cout<<"book deleted"<<endl;
		}
		};
		
		int main(){
			book b;
			return 0;
		}
