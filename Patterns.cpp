// Patterns - Nested Loops
// In Patterns - 
// Outer Loops - > Rows (i) and Inner Loops -> Columns (j)

#include <iostream>
#include <string>
#include <vector>
using namespace std;

void printpattern (int n) {
    for (int i=0; i<=n; i++) {
        for (int j=0; j<n; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}
void printpattern2 (int n) {
    for (int i=0; i<=n; i++) {
        for (int j=0; j<=i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}
void printpattern3 (int n) {
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}
void printpattern4 (int n) {
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=i; j++) {
            cout << i << " ";
        }
        cout << endl;
    }
}
void printpattern5 (int n) {
    for (int i=1; i<=n; i++) {
        for (int j=0; j<n-i+1; j++) { // n-i+1 is for printing 5,4,3,2,1 stars in each row
            cout << "* ";
        }
        cout << endl;
    }
}
void printpattern6 (int n) {
    for (int i=1; i<=n; i++) {
        for (int j=1; j<n-i+1; j++) { 
            cout << j << " ";
        }
        cout << endl;
    }
}
void printpattern7 (int n) {
    for (int i=1; i<=n; i++) {
        //spaces
        for (int j=0; j< n-i; j++) {
            cout << "   ";
        }
        //stars
        for (int j=0; j< 2*i-1; j++) {
            cout << " * ";
        }
        //spaces
        for (int j=0; j< n-i-1; j++) {
            cout << "   ";
        }
        cout << endl;
    }
}

int main () {
    
    int n; // n is for no. of rows and columns
    cout << "Enter the number of rows and columns: ";
    cin >> n;
    printpattern7 (n);

    return 0;
} 