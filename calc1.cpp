#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

float sum(float a, float b) {
    return a + b;
}

float diff(float a, float b) {
    return a - b;
}

float prod(float a, float b) {
    return a * b;
}

float div(float a, float b) {
    if (b == 0) return 0;
    return a / b;
}

float power(float a, float b) {
    return pow(a, b);
}

int main() {
    cout << "----- Bressan's Calculator | Version 1.0 -----" << endl;
    float num1 = 1, num2 = 1, result = 0;
    char operador;
    bool saida = false;
    while (saida == false) {
        cout << "Enter the first number, the arithmetic operator and the second number: ";
        cin >> num1 >> operador >> num2;
        switch (operador) {
            case '+':
                result = sum(num1, num2);
                break;
            case '-':
                result = diff(num1, num2);
                break;
            case '*':
                result = prod(num1, num2);
                break;
            case '/':
                result = div(num1, num2);
                break;
            case '^':
                result = power(num1, num2);
                break;
            default: cout << "Invalid number(s) or operator" << endl;
        }
        cout << "Result: " << std::fixed << std::setprecision(2) << result << endl;
        bool x = false;
        while (x == false) {
            int y;
            cout << "Press 0 to exit or 1 to continue: ";
            cin >> y;
            if (y == 0) {
                cout << "Thanks for using the calculator!" << endl;
                saida = true;
                x = true;
            } else if (y == 1) {
                saida = false;
                x = true;
            } else {
                cout << "Error, please try again." << endl;
                x = false;
            }
        }
    }
    return 0;
}