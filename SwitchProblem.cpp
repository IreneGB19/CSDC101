
#include <iostream>
using namespace std;

int main()
{
    int choice;
    cout << "Choose a problem to run: \n";
    cout << "1. Basic Pricing Decision\n";
    cout << "2. Weather-Based Discounts\n";
    cout << "3. Inventory Checker\n";
    cout << "4. Bulk Purchase Discount\n";
    cout << "5. Player Movement\n";
    cout << "Enter your choice (1-5): ";
    cin >> choice;
    
    switch(choice){
        case 1: {
            cout << "BASIC PRICING DECISION\n";
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
            break;
        }
        case 2: {
            cout << "WEATHER-BASED DISCOUNTS\n";
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
            break;
        }
        case 3: {cout << "INVENTORY CHECKER\n";
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
            break;
        }
        case 4: {
            cout << "BULK PURCHASE DISCOUNT\n";
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
            break;
        }
        case 5: {
            cout << "PLAYER MOVEMENT\n";
            int x = 0, y = 0;
            char move;
             
            cout << "Player starts at (0,0).\n";
            cout << "Enter movement commands (W/A/S/D). Press Q to quit.\n";
   
            while(true){
                cout << "Enter move: ";
                cin >> move;
       
                if(move == 'Q'){
                break;
            }
       
            switch(move){
                case 'W': y = y + 1; // moves up
                break;
                case 'S': y = y - 1; // moves down
                break;
                case 'A': x = x - 1; // moves left
                break;
                case 'D': x = x + 1; // moves right
                break;
                default: 
                cout << "Invalid input. Use W/A/S/D or Q to quit.\n";
                continue;
           
                }
                cout << "The location of the player is (" << x << ", " << y << ")\n";
            }
            cout << "Final location: (" << x << ", " << y << ")\n"; 
   
                break;
        }
        
        default: 
            cout << "Invalid choice. Please select a number between 1 and 5. \n";

    }
   

    return 0;
}