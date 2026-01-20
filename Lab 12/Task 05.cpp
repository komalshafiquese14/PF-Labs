#include <iostream>
using namespace std;

// Function definitions
float add(float a, float b)
 {
    return a + b;
}

float subtract(float a, float b)
 {
    return a - b;
}

float multiply(float a, float b) 
{
    return a * b;
}

float divide(float a, float b) 
{
    return a / b;
}

int main()
 {
    int choice;
    float num1, num2;

    cout << "Calculator Menu" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch (choice) {
        case 1:
            cout << "Result = " << add(num1, num2);
            break;
        case 2:
            cout << "Result = " << subtract(num1, num2);
            break;
        case 3:
            cout << "Result = " << multiply(num1, num2);
            break;
        case 4:
            cout << "Result = " << divide(num1, num2);
            break;
        default:
            cout << "Invalid Choice";
    }

    return 0;
}
