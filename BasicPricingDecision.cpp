#include <iostream>
using namespace std;

int main(){
    double money;
    
    cout << "Welcome to the Lemonade Shop!\n";
    cout << "Let's see if you have enough money for a cup of lemonade, alright? :)\n";
    cout << "Enter your money: ";
    cin >> money;

    if(money >= 1.00){
        cout << "Enjoy your lemonade!\n";
    }else{
        cout << "Sorry, you need more money.";
    }


    return 0;
}