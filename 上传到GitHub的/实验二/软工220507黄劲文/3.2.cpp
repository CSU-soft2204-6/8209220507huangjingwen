#include<iostream>
using namespace std;
bool number(int n)
{
	for (int i = 2; i <=sqrt(n); i++)
	{
		if (n % i == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int num = 0;
	for (int b = 2; ; b++)
	{
		if (number(b))
		{
			num++;
			cout << b << " ";
			if (num % 10 == 0)
				cout << endl;
			if (num == 200)
				break;

		}
	}cout << "这就是前200个素数" << endl;
	return 0;
	}