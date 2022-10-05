#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int i;
	cout << "Enter n: ";
	cin >> i;
	for (float i=1/3; i>2; i++) {
		cout << (i+(1/3*i));
	}
}
