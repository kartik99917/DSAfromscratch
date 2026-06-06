#include<iostream>

using namespace std;

int main() {

// I/P and O/P in C++
    cout << "Hello, world!" << endl;
    cout << "Start DSA" << endl;

    int x, y ;
    cin >> x >> y;
    cout << "Value of x: " << x << endl << "and value of y: " << y << endl;

// data types - int, double, long, long long, float
    int z = 10;
    double a = 3.14;
    long b = 1234567890;
    long long c = 1234567890123456789;
    float d = 3.14f;
    cout << z << " " << a << " " << b << " " << c << " " << d << endl;

//string & getline
    string s1, s2, s3;
    cin >> s1;
    cin >> s2;
    cin >> s3; 
    cout << "Takes first string as s1: " << s1 << endl;
    cout << "Takes second string as s2: " << s2 << endl;
    cout << "Takes third string as s3: " << s3 << endl;
    
// getline - it takes the whole line as input including spaces
    string str;
    getline (cin, str);

// If else statement
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age < 18) {
        cout << "You are not an adult." << endl;
    } else if (age >= 18 && age < 60) {
        cout << "You are an adult." << endl;
    } else {
        cout << "You are a senior citizen." << endl;
    }
    
// arrays and strings
    int arr[3]; // 'int' here plays as trimming a float values like taking 7.7 as 7 and 7.3 as 7
    cin >> arr[0] >> arr[1] >> arr[2];
    cout << "Value at Index 1 is: " << arr[1] << endl;

    arr[1] += 13;
    cout << "Value at Index 1 after adding 13 is: " << arr[1] << endl;
    
// 2D array
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    cout << "Value at Index 1,2 is:" << arr[1][2] << endl;

// Strings
    string str;
    cin >> str;
    cout << "String Value at Index 0 is: " << str[0] << endl;

    int len = str.length(); // Length of the string
    cout << "Length of the string is: " << len << endl;

// OR

    string s = "Hello, world!";
    cout << "Length of the string is: " << s.length() << endl;
    cout << s[6] << endl;

// For Loops and While Loops
// For loop
    int i;
    for (i = 0; i <= 3; i++) {
        cout << "DSA C++" << i << endl;
    }
    for (i =3; i>0; i--) {
        cout << "DSA C++" << i << endl;
    }

// While loop
    int i = 0;
    while (i <=4) {
        cout << "DSA C++" << i << endl;
        i++;
    }
    
// Do-while loop
    int i = 10;
    do {
        cout << "DSA C++" << i << endl;
        i++;
    } while (i <= 4);

    return 0;
}