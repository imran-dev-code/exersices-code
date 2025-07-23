#include<iostream>
using namespace std;
class shape { 
public:
	virtual void draw() { cout<<"drawing shape"<<endl;
	}
}; 
class circle : public shape {
	public:
		void draw() override  {
			cout<<"drawing circle"<<endl;
		}
};
class rectangle : public shape {
	public:
		void draw() override {
			cout<<"drawing rectangle"<<endl;
		}
};
int main() {
	shape*s;
	circle c;
	rectangle r;
	s = &c;
	s->draw(); 
	return 0;	
}