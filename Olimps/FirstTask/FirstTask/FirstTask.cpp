#include <iostream>
using namespace std;
int main(){
    int m, max, min;
    cin >> m;
    max = m % 10;
    min = m % 10;
    while (m % 10 != 0)
    {
        if (m % 10 > max)
            max = m % 10;

        if (m % 10 < min)
            min = m % 10;
        m /= 10;
    }
    cout << "min: " << min << endl;
    cout << "max: " << max << endl;
    return 0;
}

