#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    float a, b, result;
    char operation;

    cout << "Пожалуйста, введите операцию для выполнения в формате : a+b | a-b | a*b | a/b, где а – первый операнд, b – второй." << endl;
    cin >> a >> operation >> b;

    switch (operation) {
    case '+':
        result = a + b;
        cout << "Результат сложения: " << result << endl;
        break;
    case '-':
        result = a - b;
        cout << "Результат вычитания: " << result << endl;
        break;
    case '*':
        result = a * b;
        cout << "Результат умножения: " << result << endl;
        break;
    case '/':
        if (b != 0) {
            result = a / b;
            cout << "Результат деления: " << result << endl;
        }
        else {
            cout << "Ошибка! Нельзя делить на ноль." << endl;
        }
        break;
    default:
        cout << "Ошибка! Неизвестная операция." << endl;
        break;
    }

    return 0;
}