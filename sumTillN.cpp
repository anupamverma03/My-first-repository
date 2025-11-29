#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a num: ";
    cin >> n;
    int sum = 0;
    for(int i = 0; i <= n; i++){
        sum += i;
    }
    cout << "Sum of numbers till n is:  " << sum; //feature added
    //This has a new feature
}