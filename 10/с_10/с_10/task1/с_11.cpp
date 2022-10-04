#include <iostream> 
#include <cmath> 
using namespace std;
int main() {
	double a, b;
	cout << "Put A: ";
	cin >> a;
	cout << "Put B: ";
	cin >> b;
	if ((a * a) + (b * b) <= 1) { cout << "Result is: " << (a * a) + (b * b); }
	else if ((a * a) + (b * b) > 1 && a >= b) { cout << "Result is: " << pow((a + b), a / b); }
	else {
		if ((a * a) + (b * b) > 1 && a < b) {
			cout << "Result is: 0,5";
		}
	}
}