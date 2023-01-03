#include<iostream>
using namespace std;
void main()
{
	int n = 5;
	for (int i = 1; i <= 5; i++)
	{
		for (int j=1; j <= n; j++)
		{
			cout << " ";
		}
		for (int m=1; m <=i; m++)
		{
			cout << "*";
		}
		cout << endl;
		--n;
	}
}