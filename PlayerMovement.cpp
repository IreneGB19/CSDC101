#include <iostream>
using namespace std;

int main(){
   int x = 0, y = 0; // starting coordiates
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
   
    return 0;
}