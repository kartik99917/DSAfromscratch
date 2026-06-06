#include <iostream>
using namespace std;
// void, return, parameterised, non- parameterised functions

//void function - does not return any value (it will do something but will not give.)
void printname (string name) {
    cout << "Hey, Welc' to DSA - " << name << endl;
}

int main () {
    string name;
    string name2;

    // cin >> name;
    // cout << "Your Name: " << name << endl;

// Read full name including spaces using getline
    cout << "Your Name: ";
    getline (cin, name); 

    cout << "Pet Name: ";
    getline (cin, name2);
    
    printname (name2);


// int main () {
//     string name;
//     cin >> name;
//     printname (name);

//     string name2;
//     cin >> name2;
//     printname (name2);

    return 0;
}