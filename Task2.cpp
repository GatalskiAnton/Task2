#include <iostream>
#include <math.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	cout << "Введите a\n";
	float a;
	cin >> a;
	cout << "Введите b\n";
	float b;
	cin >> b;
	cout << "Введите c\n";
	float c;
	cin >> c;
	float discr;
	discr = pow(b, 2) - (4 * a * c);
	float x1, x2;
	if (discr < 0)
	{
		cout << "Дискриминант меньше нуля, корней нет\n";
	}
	else if (discr == 0) {
		cout << (-b) / (2 * a);
	}
	else {
		x1 = (-b + sqrt(discr)) / (2 * a);
		x2 = (-b - sqrt(discr)) / (2 * a);
		cout << "x1 = " << min(x1, x2) << endl;
		cout << "x2 = " << max(x1, x2);
	}
}