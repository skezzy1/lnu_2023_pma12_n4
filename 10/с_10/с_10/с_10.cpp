//�������� �� ���� ������ ���������� ����� m � ���� � ������.������� ������� ����� ���� �������� ���� ����

#include <iostream> 
#include <cmath> 
using namespace std;
int main()
{
	int m, b, k, l;
	float a;
	cin >> m;
	k = m / 1000;
	a = int(k);
	l = m % 1000;
	b = l;
	cout << a << " " << endl;
	return 0;
}