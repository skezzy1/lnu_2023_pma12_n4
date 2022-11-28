#include <iostream>
using namespace std;

int main(){
    int n, m = 0;
    cout << "n = ";
    cin >> n;
    int** Arr = new int* [n];
    for (int i = 0; i < n; i++) { 
        Arr[i] = new int[n]; 
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            Arr[i][j] = 0;
    }
    for (int i = 0; i < n; i++)  {
        for (int j = 0; j < n - m; j++)
            Arr[i][j] = i + j + 1;
        m++;
    }
    cout << "Matrix: " << endl;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++)
            cout << Arr[i][j] << " ";
        cout << endl;
    }
    cout << "Min element: " << Arr[0][0] << " " << "Max element: " << n << endl;
    cout << endl;
    return 0;
}
