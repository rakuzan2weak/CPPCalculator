#include <iostream>
using namespace std;

int main() {
    char op;
    float num1, num2;

    cout << "Введите оператор (+, -, *, /): ";
    cin >> op;

    cout << "Введите первое число: ";
    cin >> num1;

    cout << "Введите второе число: ";
    cin >> num2;

    switch(op) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1+num2;
            break;

        case '-':
            cout << num1 << " - " << num2 << " = " << num1-num2;
            break;

        case '*':
            cout << num1 << " * " << num2 << " = " << num1*num2;
            break;

        case '/':
            cout << num1 << " / " << num2 << " = " << num1/num2;
            break;

        default:
            // Если оператор не соответствует ожидаемому
            cout << "Ошибка! Неправильный оператор.";
            break;
    }

    return 0;
