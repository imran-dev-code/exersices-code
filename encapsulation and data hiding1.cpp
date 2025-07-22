#include<iostream>
using namespace std;
class bankaccount{
	private:
		int balance;
		public:
			void setamount(int b) {balance = b;
			} int getamount(){ return balance;
			}
}; 
          int main(){ 
		  bankaccount abebe;
        abebe.setamount(1000);
          cout<<"amount: "<<abebe.getamount()<<endl;
          return 0;
		  }