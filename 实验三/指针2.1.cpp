#include<iostream>
using namespace std;
	
	int judge(char a[30], char b[30])
	{
	int m = strlen(a);
	int n = strlen(b);
	int w = 0, num = 0;
	for (int i = 0, int j = 0; j < n; i++)
	{

		if (a[i] != b[j])
		{
			w++;
			if (a[i] == ' ')
			{
				w--;
			}
		}
		else if (j < n)
		{
			if (a[i] == b[j])
			{
				num++;
				j++;
			}
		}
	}
	if (num == n)
	{
		cout << w + 1 << endl;
	}
	else cout << "-1";
	return 0;
}
int main()
{
	char a[30], b[30];
	cout << "�������һ���ַ���" << endl;
	cin.getline(a, 30);
	cout << "������ڶ����ַ���" << endl;
	cin.getline(b, 30);
	
	cout << judge(char * a,char *b );
	return 0;
}