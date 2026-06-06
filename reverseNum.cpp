#include<iostream>
using namespace std;

int main () {
    int n;
    cout << "Enter any digit number: ";
    cin >> n;
    int revnum = 0;
    while (n>0) {
        int lastnum = n % 10;
        revnum = (revnum * 10) + lastnum;
        n = n / 10;
    }
    cout << "Your reversed number is: " << revnum;
    
    return 0;
}