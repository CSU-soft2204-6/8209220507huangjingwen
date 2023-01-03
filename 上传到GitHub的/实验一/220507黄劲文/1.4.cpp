#include<iostream>
using namespace std;
int b(int n)
{
	int a[99];
	int i = 0;
	while (n > 7)
	{
		a[i] = n % 8;
		i++;
		n = n / 8;

	}
	a[i] = n; 
	for (; i >= 0; i--)
		cout << a[i] << ""; cout <<"其为八进制结果"<< endl;
	return 0;
}

int main()
{
	int m;
	cin >> m;
	cout << b(m) << endl;
	return 0;
}