#include <iostream>
using namespace std;

int main() {
    int a, b, age;

    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Enter your age: ";
    cin >> age;

    // ---------- 1. Basic try, throw, catch ----------
    cout << endl << "--- 1. Division Example ---" << endl;
    try {
        if (b == 0) {
            throw "Division by zero is not allowed";   // throw a message
        }
        cout << "Result = " << a / b << endl;
    }
    catch (const char *msg) {                          // catch the message
        cout << "Error: " << msg << endl;
    }

    // ---------- 2. Multiple catch blocks ----------
    cout << endl << "--- 2. Age Check (Multiple Catch) ---" << endl;
    try {
        if (age > 100) {
            throw "Age is not valid";                  // throws text
        }
        if (age < 18) {
            throw age;                                 // throws int
        }
        cout << "Age " << age << " is eligible" << endl;
    }
    catch (int x) {                                    // catches int
        cout << "Error: age " << x << " is less than 18, not eligible" << endl;
    }
    catch (const char *msg) {                          // catches text
        cout << "Error: " << msg << endl;
    }

    // ---------- 3. Catch all exceptions ----------
    cout << endl << "--- 3. Catch All ---" << endl;
    try {
        throw 1.5;                                     // throws a double
    }
    catch (...) {                                      // ... catches any type
        cout << "Some unknown exception caught" << endl;
    }

    cout << endl << "Program ended normally" << endl;
    return 0;
}