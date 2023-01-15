#include<iostream>
using namespace std;
int main()
{
	int* p ;
	p=new int [100];
	int n;

	for (n =0; n < 100; n++)
	{
		*(p+n)=1;
	}
	for (int j = 2; j <= 100; j++)
	{
		for (int i = j; i <= 100; i = i + j+1)
		{
			*(p + i)== 0 ?( * (p + i) = 1) :(*(p + i) = 0);
		}
	}
	for (n = 0; n < 100; n++)
	{
		if(*(p + n) ==1)
		{
			cout << n+1<<",";
		}
	}
	return 0;
}