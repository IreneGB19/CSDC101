#include <iostream>
using namespace std;

int main(){
    int lemon, sugar;
    
    cout << "Lemonade Ingredients Inventory Checker\n";
    cout << "Enter no. of lemons: ";
    cin >> lemon;
    cout << "Enter cups of sugar: ";
    cin >> sugar;

    if(lemon <= 0 || sugar <=0 ){
        cout << "You can't make lemonade!\n";
    }else{
        cout << "You're ready to sell lemonade!\n";
    }


    return 0;
}