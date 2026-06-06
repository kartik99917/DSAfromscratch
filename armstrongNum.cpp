#include<iostream>
#include<cmath>
using namespace std;

// Function to check if number is Armstrong (returns 1 if yes, 0 if no)
int armstrongnum(int num) {
    int original = num;
    int sum = 0;
    int digits = 0;
    // Count total digits
    int temp = num;
    while (temp > 0) {
        digits++;
        temp = temp / 10;
    }
    // Sum of each digit raised to power of total digits
    while (num > 0) {
        sum = sum + pow(num % 10, digits);
        num = num / 10;
    }
    // Return 1 if Armstrong, 0 if not
    return (sum == original);
}

int main () {
    int n;
    cout << "Enter any number: ";
    cin >> n;
    // Call function - returns 1 if Armstrong, 0 if not
    if (armstrongnum(n) == 1) {
        cout << n << " is an Armstrong number!" << endl;
    } else {
        cout << n << " is not an Armstrong number!" << endl;
    }

    return 0;
}