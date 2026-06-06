#include<iostream>
using namespace std;

int main () {
    int n;
    cout << "Enter any digit number: ";
    cin >> n;

    int duplicate = n;
    int revnum = 0;
    while (n>0) {
        int lastnum = n % 10;
        revnum = (revnum * 10) + lastnum;
        n = n / 10;
    }
    
    if (duplicate == revnum) {
        cout << "True, its palindrome! because 'revnum = I/P num'" << endl;
    } else {
        cout << "No, not a palindrome because 'revnum != I/P num'" << endl;
    }
    cout << "Your reversed number is: " << revnum << endl;

    return 0;
}