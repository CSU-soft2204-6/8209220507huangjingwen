#include<iostream>
using namespace std;
int main()
{
	int p, b;
	int* m, * n;
	cout << "请输入数组一的元素个数" << endl;
	cin >> p;
	cout << "请输入排列好的第一个数组" << endl;
	m = new int[p];
	for (int i = 0; i < p; i++)
	{
		cin >> *(m+ 0);
	}
	cout << "请输入数组二的元素个数" << endl;
	cin >> b;
	cout << "请输入排列好的第二个数组" << endl;
	n = new int[b];
	for (int i = 0; i < b; i++)
	{
		cin >> *(n+ 0);
	}
	int s = p + b;
	int* h;
	h = new int[s];
	for (int i = 0; i < p; i++)
	{
		*(h + i) = *(m + i);
	}
	for (int i = p; i < s; i++)
	{
		for (int j = 0; j < b; j++)
		{
			*(h + i) = *(n + j);
		}
	}
	
	for (int j = 0; j < s-1; j++)
	{

		for (int i = j + 1; i < s; i++)
		{
			if (*(h+j) > *(h+i))
			{
				int t = *(h+i);
				*(h+i) = *(h+j);
				*(h+j) = t;


			}
		}
	}
	cout << "排列后为：";
	for (int i = 0; i < s; i++)
	{
		cout << *(h+i) << ",";
	}
	return 0;
}