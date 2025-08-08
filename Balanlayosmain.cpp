#include <iostream> // input and output library
using namespace std; // standard input for cin and cout

int main () {
    
    int num1, num2, product;// declared variables
    
    cout << "Enter a number: \n"; //asks user for a multiplicand
    cin >> num1; // user input multiplicand
    cout << "Enter another number: \n"; //asks user for a multiplier
    cin >> num2;  // user input multiplier
    product = num1*num2; // sets the value of product variable as the product of num1 and num2
    cout << "The product of the two number is: " << product; // output/product
    
    return 0;
}
