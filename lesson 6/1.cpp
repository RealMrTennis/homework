#include <iostream>
using namespace std;

int main() {
    int arr[10];

    cout << "¬ведите 10 чисел: " << endl;
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    cout << "ƒубликаты:" << endl;
    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (arr[i] == arr[j]) {
                cout << "„исло " << arr[i] << " | позиции - " << i << " и " << j << endl;
            }
        }
    }

    return 0;
}