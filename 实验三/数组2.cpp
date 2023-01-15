#include<iostream>
using namespace std;
int main()
{
	int a[10];
	int i, j;
	for (int n = 0; n < 10; n++)
	{
		cin >> a[n];
      }
	for (int j= 0; j < 9; j++)
	{
	
	for (int i = j+1; i <10; i++)
	{
		if (a[j]> a[i])
		{
			int t = a[i ];
			a[i] = a[j];
			a[j] = t;


		}
	}
}
	cout << "ÅÅÁÐºóÎª£º";
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << ",";
	}
	return 0;
}
