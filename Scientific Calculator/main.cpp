#include <iostream>
#include <cmath>

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

double square(double num) {
    return num * num;
}

double squareRoot(double num) {
    return sqrt(num);
}

double cube(double num) {
    return num * num * num;
}

double cubeRoot(double num) {
    return cbrt(num);
}

double reciprocal(double num) {
    if (num != 0) {
        return 1.0 / num;
    } else {
        cout << "Error! Division by zero." << endl;
        return 0;
    }
}

double calculateSine(double angle, bool isDegree = true) {
    if (isDegree) {
        angle = angle * (M_PI / 180.0);
    }
    return sin(angle);
}

double calculateCosine(double angle, bool isDegree = true) {
    if (isDegree) {
        angle = angle * (M_PI / 180.0);
    }
    return cos(angle);
}

double calculateTangent(double angle, bool isDegree = true) {
    if (isDegree) {
        angle = angle * (M_PI / 180.0);
    }
    return tan(angle);
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
        cout << "7. Square\n";
        cout << "8. Square Root\n";
        cout << "9. Cube\n";
        cout << "10. Cube Root\n";
        cout << "11. Reciprocal\n";
        cout << "12. Sine\n";
        cout << "13. Cosine\n";
        cout << "14. Tangent\n";
        cout << "15. Bitwise AND\n";
        cout << "16. Bitwise OR\n";
        cout << "17. Bitwise XOR\n";
        cout << "18. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 17) {
            cout << "Enter first number: ";
            cin >> num1;
            if (choice <= 6 || (choice >= 15 && choice <= 17)) {
                cout << "Enter second number: ";
                cin >> num2;
            }
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
                cout << "Result: " << square(num1) << endl;
                break;
            case 8:
                cout << "Result: " << squareRoot(num1) << endl;
                break;
            case 9:
                cout << "Result: " << cube(num1) << endl;
                break;
            case 10:
                cout << "Result: " << cubeRoot(num1) << endl;
                break;
            case 11:
                cout << "Result: " << reciprocal(num1) << endl;
                break;
            case 12: {
                char angleType;
                cout << "Is the angle in degrees? (y/n): ";
                cin >> angleType;
                bool isDegree = (angleType == 'y' || angleType == 'Y');
                cout << "Result: " << calculateSine(num1, isDegree) << endl;
                break;
            }
            case 13: {
                char angleType;
                cout << "Is the angle in degrees? (y/n): ";
                cin >> angleType;
                bool isDegree = (angleType == 'y' || angleType == 'Y');
                cout << "Result: " << calculateCosine(num1, isDegree) << endl;
                break;
            }
            case 14: {
                char angleType;
                cout << "Is the angle in degrees? (y/n): ";
                cin >> angleType;
                bool isDegree = (angleType == 'y' || angleType == 'Y');
                cout << "Result: " << calculateTangent(num1, isDegree) << endl;
                break;
            }
            case 15:
                cout << "Result: " << bitwise_and((int)num1, (int)num2) << endl;
                break;
            case 16:
                cout << "Result: " << bitwise_or((int)num1, (int)num2) << endl;
                break;
            case 17:
                cout << "Result: " << bitwise_xor((int)num1, (int)num2) << endl;
                break;
            case 18:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
        cout << endl;
    } while (choice != 18);

    return 0;
}
