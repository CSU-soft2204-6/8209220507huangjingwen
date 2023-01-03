#include<iostream>
using namespace std;
int B(int m, int n)
{
	if (m < n)
	{
		int t;
		t = n;
		n = m;
		m = t;
	}
	int b = m;
	while (b % m != 0 || b % n != 0)
		b++;
	cout << b << endl;
	return 0;
}
int Y(int m, int n)
{
	int y ;
	if (m < n)
	{
		int t = m;
		m = n;
		n = t;
	}
	y = n;
	while (n % y != 0 || m %y != 0)
		y--&&y!=0;
	cout << y << endl;
	return 0;
}
int main()
{
	int m, n ;
	cin >> m >> n;
	B(m, n);
	cout << "这是最小公倍数"  << endl;
	 Y(m, n);
	cout << "这是最大公约数"  << endl;
	return 0;
}
