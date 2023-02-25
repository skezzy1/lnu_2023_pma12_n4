#include <iostream>

using namespace std;

int main()
{
    double n;
    double sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    for (double i = 0; i < n; i++)
    {
        sum = (1 / (n*(n + 1)));
    }

    cout << "Sum is: " << sum << endl;
    return 0;
}