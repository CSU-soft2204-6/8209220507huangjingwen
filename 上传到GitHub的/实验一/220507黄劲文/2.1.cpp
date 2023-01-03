#include<iostream>
using namespace std;
bool B(char ch)
{
	return ch >= 'A' && ch <= 'Z';
}
char toUpper(char ch)
{
	return ch - 'a' + 'A';
}
int add(char ch)
{
	return ch +1;
}
int main()
{
	char ch;
		cin >> ch;
		if (B(ch) == 1)
			cout <<  add(ch) << endl;
		else
			cout << toUpper(ch) << endl;
}