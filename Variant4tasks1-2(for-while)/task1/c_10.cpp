#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a, b, h;
	float x, y, g = x * y, max = 0, min = 0;
	cout << "Enter A(from): ";
	cin >> a;
	cout << "Enter B(to): ";
	cin >> b;
	cout << "Enter h(steps): ";
	cin >> h;
	for (x = a; x <= b; x += h) {
		y = x * sin(x);
		cout << x << "\t\t\t\t\t" << y << endl;
		if (y > max) { max = y;}
	}
	cout << "Max: " << max << endl;
}


