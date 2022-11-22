#include <iostream>
#include <string>
using namespace std;
//Дано послідовність слів, відокремлених пропусками, в кінці крапка. В словах з
//непарною кількістю символів вилучити середню літеру.
int main()
{
    string s, word;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++)
    {
        if (s == s.erase(s.length() / 2, 2)) {
            cout << s << " ";
        }
    }
 
    cout << s << "\n\n";

    system("pause");
    return 0;
}
