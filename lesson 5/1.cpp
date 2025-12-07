#include <bits/stdc++.h>
using namespace std;

int main() {
    int x = 0;
    int a = rand() % 100;
    int b;
    while (a != b) {
        cin >> b;
        if (b == a) {
            cout << "Угадал ((" << endl;
            break;
        }
        else if (b < a) {
            cout << "Подсказка: больше" << endl;
        }
        else if (b > a) {
            cout << "Подсказка: меньше" << endl;
        }
        else {
            cout << "бред несёшь >(" << endl;
        }
        x += 1;
    }
    cout << "попыток: " << x << endl;
    return 0;
}