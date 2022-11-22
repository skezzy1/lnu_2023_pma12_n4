#include <iostream>
#include <string>
using namespace std;
struct sportsman{
    int mark;
    string surname;
    string kungfu, box, hockey, football, soccer;
};
void input_sportsman(sportsman& x) {
    cout << "Enter Surname: \0";
    if (cin.peek() == '\n')
        cin.ignore();
    getline(cin, x.surname);
    cout << "Enter age: " << endl;
    cin >> x.age;
    cout << "Enter mark: " << endl;
    cin >> x.mark;
}
int main()
{
  
}

