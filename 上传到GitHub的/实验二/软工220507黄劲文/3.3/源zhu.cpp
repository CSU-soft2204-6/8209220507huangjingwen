#include<iostream>
#include"my.h"
using namespace std;
int main()
{
	double a, b;
	cout << "请输入摄氏度,"<< "请输入华氏度" << endl;
	cin >> a>> b;
	cout << "转化为华氏度为" << celsius_to_fah(a) << endl;
	cout << "转化为摄氏度为" << fahrenheit_to_cels(b) << endl;
	return 0;
}