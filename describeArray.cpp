#include <iostream>
using namespace std;

int main(){
    int n;
    
    cout << "Enter number of elements: ";
    cin >> n;
    
    int arr[n];
    
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    int minVal = arr[0];
    int maxVal = arr[0];
    int sum = 0;
    int even = 0;
    int odd = 0;
    
    for (int i = 0; i < n; i++){
        int x = arr[i];
    
    
    if (x < minVal) minVal = x;
    if (x > maxVal) maxVal = x;
    
    sum = sum + x;
    
    if (x % 2 == 0){
        even++;
    }else {
        odd++;
    }
    }
    cout << "Minimum: " << minVal << endl;
    cout << "Maximum: " << maxVal << endl;
    cout << "Sum: " << sum << endl;
    cout << "Even numbers: " << even << endl;
    cout << "Odd numbers: " << odd << endl;
    return 0;
}