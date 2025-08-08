#include <iostream> // input and output library
#include <cmath> // for power function
using namespace std; // standard input for cin and cout

int main () {
    
    double base1, pow1; // declared variables
    
    cout << "Enter a base: \n"; 
    cin >> base1; 
    cout << "Enter an exponent: \n"; 
    cin >> pow1; 
    double result = pow(base1, pow1);
    cout << "result: " << result;
    
    return 0;
}
