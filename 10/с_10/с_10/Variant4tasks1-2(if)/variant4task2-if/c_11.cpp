#include <iostream> 
#include <cmath> 
/*��� ������   ��������� �������� �������:  .....*/
using namespace std;
int main() {
	double x;
	cout << "Put X: ";
	cin >> x;
	if (x <= 1) { cout << "Result is: " << (pow(x,2)+1); }
	else {
		if(x>1){
			cout << "Result is: " << (1/(x+6));
	}
}
return 0;
system("pause");
}
