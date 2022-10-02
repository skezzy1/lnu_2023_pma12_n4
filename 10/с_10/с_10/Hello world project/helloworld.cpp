#include <iostream>
#include <cmath>
using namespace std;
int main()
{   
    int a, b, c, d, f, task;
    cout << "Press A: " << endl;
    cin >> a;
    cout << "Press B: " << endl;
    cin >> b;
    cout << "Press C: " << endl;
    cin >> c;
    cout << "Press D: " << endl;
    cin >> d;
    cout << "Press F: " << endl;
    cin >> f;
    task = a + b + c + d + f / 5;
    cout << "Result: " << task << endl;
    return 0;
}
