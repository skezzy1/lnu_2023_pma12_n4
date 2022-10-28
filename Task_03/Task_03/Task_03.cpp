#include <iostream> 
using namespace std;
//Задано масив цілих чисел, цілі числа m і l (0 ≤ l ≤ m-1). Вивести лише ті елементи масиву, у яких остача від ділення на m дорівнює l.
int main()
{
    setlocale(LC_CTYPE, "ukr");
    int SizeOfMassive;
    cout << "Enter size of massive: ";
    cin >> SizeOfMassive;
    int* pArray = new int[SizeOfMassive];
    cout << "Enter value of massive: ";
    for (int i = 0; i < SizeOfMassive; i++){
        cin >> pArray[i];
    }

    int m, l;
    cout << "M: ";
    cin >> m;
    cout << "L: ";
    cin >> l;
    if (l > 0 && l <= m - 1) {
        for (int i = 0; i < SizeOfMassive; i++)
        {
            if (pArray[i] % m == l) {
                cout << pArray[i] << " ";
            }
        }
    }
    return 0;
}