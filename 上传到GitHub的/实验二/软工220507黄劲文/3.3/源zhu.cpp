#include<iostream>
#include"my.h"
using namespace std;
int main()
{
	double a, b;
	cout << "���������϶�,"<< "�����뻪�϶�" << endl;
	cin >> a>> b;
	cout << "ת��Ϊ���϶�Ϊ" << celsius_to_fah(a) << endl;
	cout << "ת��Ϊ���϶�Ϊ" << fahrenheit_to_cels(b) << endl;
	return 0;
}