#include <iostream>
using namespace std;

int main() {
    cout << "¬ведите цифры: " << endl;
    float a;
    cin >> a;
    float max = a, min = a, n = a, t = 1;
    while (cin >> a) {
        if (a > max) {
            max = a;
        }
        else if (a < min) {
            min = a;
        }
        n += a;
        t += 1;
    }
    cout << "Cреднее арифметическое: " << n / t << endl;
    cout << "Mакс: " << max << endl;
    cout << "Mин: " << min << endl;
    return 0;
}