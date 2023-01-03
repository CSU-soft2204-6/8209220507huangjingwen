#include<iostream>
using namespace std;
int main()
{
	int a = 1, b, c;
	b = (a + 1) * 2;
	for (int i = 1; i < 10; i++)
	{
		c = (b + 1) * 2;
		b = c;
	}
	cout << c;
	return 0;

}