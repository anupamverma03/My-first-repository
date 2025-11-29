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
    cout << "Sum of number till n is:  " << sum; // New feature
}