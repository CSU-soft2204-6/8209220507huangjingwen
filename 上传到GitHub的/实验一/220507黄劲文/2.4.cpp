#include<iostream>
using namespace std;
float a, b;
int main()
{
	char p;
	cout << "�����������+,-,*,/ :" << endl;
	cin >> p;
	cout << "��������������" << endl;
	cin >> a >> b;
	switch (p)
	{
	case'+':
			cout << a + b;
			break;
	case'-':
		cout << a - b;
		break;
	case'/':if (b == 0)
		cout << "Error!" << endl;
		   else cout << a / b;
		break;
	case'*':
		cout << a * b << endl;
		break;

	}
	return 0;
}
