/*https://www.eolymp.com/uk/problems/271 (не виконано)*/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	unsiged int n;
	cout << "Enter N: ";
	cin >> n;
	long int f = 1;
	for (int i = 2; i <= n; i++) {
		f = f * i;
		cout << f;
	}
	return 0;
}