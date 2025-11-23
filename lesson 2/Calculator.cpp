#include <iostream>
using namespace std;
int main() {
	int a = 4;
	cout << "Площадь квадрата со стороной " << a << " равна " << a * a << endl;
	int b = 6;
	cout << "Площадь прямоугольника со сторонами " << a << " и " << b << " равна " << a * b << endl;
	int h = 8;
	cout << "Площадь треугольника с основанием " << b << " и высотой " << h << " равна " << (h * b) / 2 << endl;
}