#include <iostream>
using namespace std;

int main(){
    double temperature;
    
    cout << "Welcome to the Lemonde Shop!\n";
    cout << "Let's check the weather today. Sunny day means discounted lemonade!\n";
    cout << "Enter today's temperature in celsius: ";
    cin >> temperature;

    if(temperature >= 30){
        cout << "It's hot! Lemonade costs $0.80 today.\n";
    }else{
        cout << "Lemonade costs $1.00 today.\n";
    }


    return 0;
}