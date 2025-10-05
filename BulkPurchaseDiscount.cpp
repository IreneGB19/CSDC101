#include <iostream>
using namespace std;

int main(){
    int cups;
    double pricePerCup = 1.0;
    double totalCost;
    
    cout << "How many cups do you want to purchase? ";
    cin >> cups;

    if(cups >= 1 && cups <= 4){
        totalCost = cups * pricePerCup;
        cout << "Total cost: $" << totalCost << endl;
    }else if(cups >= 5 && cups <= 9){
        totalCost = cups * pricePerCup * 0.90;
        cout << "Total cost: $" << totalCost << endl;
    }else if(cups >= 10){
        totalCost = cups * pricePerCup * 0.80;
        cout << "Total cost: $" << totalCost << endl;
    }else{
        cout << "Invalid number of cups.\n";
    }

    return 0;
}