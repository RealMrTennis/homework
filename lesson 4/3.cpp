#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cout << "Введите стороны треугольника: " << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    if (a + b > c and a + c > b and b + c > a and a == b and b == c and a == c) {
        cout << "Треугольник - равносторонний" << endl;
    }
    else if (a + b > c and a + c > b and b + c > a and a == b or b == c or a == c) {
        cout << "Треугольник - равнобедренный" << endl;
    }
    else if (a + b > c and a + c > b and b + c > a) {
        cout << "Треугольник - разносторонний" << endl;
    }
    else {
        cout << "Треугольника не существует" << endl;
    }
    return 0;
}