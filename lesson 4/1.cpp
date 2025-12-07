#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "Введи интересы(2): [баскетбол, NE_REGAET_2, рисование]" << endl;
	string a;
	string b;
	cin >> a;
	cin >> b;

	if (a == "рисование" and b == "баскетбол") {
		cout << "баскетбольные зарисовки: арт по игре" << endl;
	}
	else if (a == "рисование" and b == "NE_REGAET_2") {
		cout << "CS:ART - Визуальные разборы раундов" << endl;
	}
	else if (a == "баскетбол" and b == "NE_REGAET_2") {
		cout << "баскетбольный CS-анализ" << endl;
	}
	else if (a == "баскетбол" and b == "рисование") {
		cout << "баскетбольные зарисовки: арт по игре" << endl;
	}
	else if (a == "NE_REGAET_2" and b == "рисование") {
		cout << "CS:ART - Визуальные разборы раундов" << endl;
	}
	else if (a == "NE_REGAET_2" and b == "баскетбол") {
		cout << "баскетбольный CS-анализ" << endl;
	}
	else {
		cout << "error" << endl;
	}
	return 0;
}