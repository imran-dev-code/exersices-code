#include <iostream> 
using namespace std; 
// Function template 
template <typename T> 
T add(T a, T b) { 
return a + b; 
} 
int main() { 
cout << add(3, 4) << endl;        
// int 
cout << add(3.5, 2.1) << endl;    // float 
cout << add(string("Hi "),string("there")) << endl; // string
return 0;
}