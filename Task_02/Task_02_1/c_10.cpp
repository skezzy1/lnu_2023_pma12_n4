#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b, h, y;
    cout << "Enter a, b and h: ";
    cin >> a >> b >> h;
    float x = a;
    int count = 0;
    int n = 0;
    float max = 0;
    y = max;
    while (x <= b) {
        if (h <= 0) {
            cout << "Please enter a bigger than null number: ";
            break;
        }
        y = x * sin(x);
        cout << "x = " << x << "; y = " << y << endl;
        if (y < 0.0) {
            count += 1;
            count++;
        }
        if (max < y) {
            max = y;
        }
        x = x + h;
    }
    cout << "Number of negative numbers: " << count << endl;
    cout << "The maximum value of the function: " << y << endl;
    return 0;
}
