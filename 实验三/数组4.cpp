#include<iostream>
using namespace std;
int main()
{
	int p, b;
	int* m, * n;
	cout << "����������һ��Ԫ�ظ���" << endl;
	cin >> p;
	cout << "���������кõĵ�һ������" << endl;
	m = new int[p];
	for (int i = 0; i < p; i++)
	{
		cin >> *(m+ 0);
	}
	cout << "�������������Ԫ�ظ���" << endl;
	cin >> b;
	cout << "���������кõĵڶ�������" << endl;
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
	cout << "���к�Ϊ��";
	for (int i = 0; i < s; i++)
	{
		cout << *(h+i) << ",";
	}
	return 0;
}