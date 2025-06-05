#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    char op;
    
    // Input: two integers and an operator
    cout << "Enter first integer: ";
    cin >> num1;
    
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    
    cout << "Enter second integer: ";
    cin >> num2;
    
    // Perform operation and print result
    switch (op) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << "Result: " << num1 / num2 << endl;
            } else {
                cout << "Error: Division by zero!" << endl;
            }
            break;
        default:
            cout << "Error: Invalid operator!" << endl;
            break;
    }
    
    return 0;
}

/* 
Example Usage:
Enter first integer: 10
Enter operator (+, -, *, /): *
Enter second integer: 5
Result: 50

Enter first integer: 15
Enter operator (+, -, *, /): /
Enter second integer: 3
Result: 5

Enter first integer: 8
Enter operator (+, -, *, /): +
Enter second integer: 7
Result: 15
*/