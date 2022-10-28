#include <iostream> 

using namespace std;

int main()
{
    int n, m;
    cout << "Enter n:";
    cin >> n;
    cout << "Enter m:";
    cin >> m;
    int** pArray = new int* [n];

    for (int i = 0; i < n; i++) {
        pArray[i] = new int[m];
    }

    //Set values 
    int element = 0;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            //pArray[i][j] = element++; 
            cin >> pArray[i][j];
            cout << pArray[i][j] << "\t";
        }
    }
}