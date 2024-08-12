#include <iostream>
using namespace std;

double num1, num2;

double add(double num1, double num2) {
    return num1 + num2;
}

double subtract(double num1, double num2) {
    return num1 - num2;
}

double multiply(double num1, double num2) {
    return num1 * num2;
}

double divide(double num1, double num2) {
    if (num2 != 0) {
        return num1 / num2;
    } else {
        cout << "Error! Division by zero." << endl;
        return 0;
    }
}

int mod(int num1, int num2) {
    if (num2 != 0) {
        return num1 % num2;
    } else {
        cout << "Error! Division by zero." << endl;
        return 0;
    }
}

double power(double base, int exponent) {
    double result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

int bitwise_and(int num1, int num2) {
    return num1 & num2;
}

int bitwise_or(int num1, int num2) {
    return num1 | num2;
}

int bitwise_xor(int num1, int num2) {
    return num1 ^ num2;
}

int main() {
    int choice;

    do {
        cout << "Menu:\n";
        cout << "1. Add\n";
        cout << "2. Subtract\n";
        cout << "3. Multiply\n";
        cout << "4. Divide\n";
        cout << "5. Modulus\n";
        cout << "6. Power\n";
        cout << "7. Bitwise AND\n";
        cout << "8. Bitwise OR\n";
        cout << "9. Bitwise XOR\n";
        cout << "10. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 9) {
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
        }

        switch (choice) {
            case 1:
                cout << "Result: " << add(num1, num2) << endl;
                break;
            case 2:
                cout << "Result: " << subtract(num1, num2) << endl;
                break;
            case 3:
                cout << "Result: " << multiply(num1, num2) << endl;
                break;
            case 4:
                cout << "Result: " << divide(num1, num2) << endl;
                break;
            case 5:
                cout << "Result: " << mod((int)num1, (int)num2) << endl;
                break;
            case 6:
                cout << "Result: " << power(num1, (int)num2) << endl;
                break;
            case 7:
                cout << "Result: " << bitwise_and((int)num1, (int)num2) << endl;
                break;
            case 8:
                cout << "Result: " << bitwise_or((int)num1, (int)num2) << endl;
                break;
            case 9:
                cout << "Result: " << bitwise_xor((int)num1, (int)num2) << endl;
                break;
            case 10:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
        cout << endl;
    } while (choice != 10);

    return 0;
}
