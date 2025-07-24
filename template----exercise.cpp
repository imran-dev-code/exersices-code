#include <iostream>
using namespace std;
// Template function to find the maximum of two values
template <typename T>
T findMax(const T& a, const T& b) {
    return (a > b) ? a : b;
}

// Example usage
int main() {
    cout << "Max of 10 and 20 is: " << findMax(10, 20) << endl;
    cout << "Max of 3.14 and 2.71 is: " << findMax(3.14, 2.71) << endl;
    cout << "Max of 'A' and 'Z' is: " << findMax('A', 'Z') << endl;
    cout << "Max of \"apple\" and \"banana\" is: " << findMax(string("apple"), string("banana")) << endl;

    return 0;
}
