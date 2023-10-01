#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void divide(float a, float b) {
	if (b == 0) throw 444;
	else cout << (a / b);
}

int main() {
	setlocale(LC_ALL, "RU");

	try {
		divide(5.2f, 0.0f);
	}
	catch (int error) {
		if (error == 444) cout << "Я не могу выплнить деление на 0!";
	}

	return 0;
}