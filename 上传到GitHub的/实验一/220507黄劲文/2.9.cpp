#include<iostream>
using namespace std;
int main()
{
	int i, s=0, n=0;
	for (i = 2; s+i<=100; i = i * 2)
		s =s +i, n = n + 1;
	cout << "平均每天花" << s *0.8/n << endl;
	return 0;
}

