// Take to numbers and print its sum

#include <iostream>
using namespace std;

void printsum (int x, int y) {
    cout << "The sum of two number x and y is: " << x+y << endl;
}

int main(){
    int x, y;
    cout << "Value of x: ";
    cin >> x;

    cout << "Value of y: ";
    cin >> y;
    printsum (x, y);

    return 0;   
}