#include <iostream>
using namespace std;
int main() {
    double a, b;
    char op;
    cout << "Введите выражение: ";
    cin >> a >> op >> b;
    switch (op) {
    case '+':
        cout << "Результат: " << a + b << endl;
        break;
    case '-':
        cout << "Результат: " << a - b << endl;
        break;
    case '*':
        cout << "Результат: " << a * b << endl;
        break;
    case '/':
        if (b != 0) {
            cout << "Результат: " << a / b << endl;
        }
        else {
            cout << "Ошибка: деление на ноль!" << endl;
        }
    case '%':
        cout << "Результат: " << (a * b) / 100 << endl;
    }
    return 0;
}