#include<iostream>
using namespace std;
int main() 
{
	int s, * h;
	cout << "�������������" << endl;
	cin >> s;
	cout <<"����������Ԫ��" << endl;
	h = new int[s];
	for (int i = 0; i < s; i++)
	{
		cin >> *(h + i);
	}
	for (int j = 0; j < s - 1; j++)
	{

		for (int i = j + 1; i < s; i++)
		{
			if (*(h + j) > *(h + i))
			{
				int t = *(h + i);
				*(h + i) = *(h + j);
				*(h + j) = t;


			}
		}
	}
	cout << "���к�Ϊ��";
	for (int i = 0; i < s; i++)
	{
		cout << *(h + i) << ",";
	}
	return 0;
}