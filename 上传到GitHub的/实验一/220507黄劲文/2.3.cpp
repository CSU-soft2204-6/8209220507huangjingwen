#include<iostream>
using namespace std;
float J(float a, float b, float c)
{
	float L;
	L = a + b + c;
	return L;

}
float a, b, c;
int main()
{
	cin >> a>>b>>c;
	if ((a + b > c && a - b < c) && (a == b || a == c || b == c))
		cout << "�ܳ�Ϊ" << J(a, b, c) << endl << "��Ϊ����������" << endl;
	else cout << "�ܳ�Ϊ" << J(a, b, c) <<endl<< "�䲻Ϊ����������" << endl;
	return 0;
}