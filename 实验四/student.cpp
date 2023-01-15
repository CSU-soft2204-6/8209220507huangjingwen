#include<iostream>
#include"student.h"
using namespace std;
void Student::display()
{
	cout << "num£º" << num << endl;
	cout << "name£º" << name << endl;
	cout << "sex£º" << sex << endl;
} 
void Student::set_value(void)
{
	cin >> num;
	cin >> name;
	cin >> sex;
}