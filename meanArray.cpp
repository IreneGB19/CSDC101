#include <iostream>
using namespace std;

int main(){
    int n;
    
    cout << "Enter number of elements: ";
    cin >> n;
    
    int arr[n];
    int sum = 0;
    
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        sum = sum + arr[i];
        
    }
    
    float mean = (float)sum / n;
    cout  << "Mean = " << mean;
    
    return 0;
}