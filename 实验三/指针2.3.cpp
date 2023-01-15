#include<iostream>
using namespace std;
int main() 
{
	int s, * h;
	cout << "请输入数组个数" << endl;
	cin >> s;
	cout <<"请输入数组元素" << endl;
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
	cout << "排列后为：";
	for (int i = 0; i < s; i++)
	{
		cout << *(h + i) << ",";
	}
	return 0;
}