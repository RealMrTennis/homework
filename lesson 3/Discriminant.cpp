#include <iostream>
using namespace std;
int main() {
    double a, b, c;
    int x1, x2;
    cin >> a >> b >> c;
    double D = (b * b) - (4 * a * c);
    if (D > 0) {
        x1 = (b * (-1) - D) / (2 * a);
        x2 = (b * (-1) + D) / (2 * a);
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    else if (D == 0) {
        x1 = (b * (-1)) / (2 * a);
        cout << "x = " << x1 << endl;
    }
    else {
        cout << "Нет решений" << endl;
    }
    return 0;
}