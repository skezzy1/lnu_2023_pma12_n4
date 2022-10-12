#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int n;
  cout << "Enter n: ";
  cin >> n;

  float a = 1;
  if (n > 2) {
    for (int i = 1; i <= n; i++)
    {
      a = a * (i + (1.0 / (3.0 * i)));
    }
    cout << "Result is: " << a;
  }
}
