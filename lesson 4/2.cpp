#include <bits/stdc++.h>
using namespace std;

int main() {
    float a;
    cout << "ВВедите сумму продуктов: " << endl;
    cin >> a;

    if (a <= 100) {
        cout << a * 0.9 << "Р (cкидка_10%_!)" << endl;
    }
    else if (a <= 500) {
        cout << a * 0.85 << "Р (cкидка_15%_!)" << endl;
    }
    else if (a <= 1000) {
        cout << a * 0.8 << "Р (cкидка_20%_!)" << endl;
    }
    else if (a <= 2500) {
        cout << a * 0.75 << "Р (cкидка_25%_!)" << endl;
    }
    else if (a <= 5000) {
        cout << a * 0.70 << "Р (cкидка_30%_!)" << endl;
    }
    return 0;
}