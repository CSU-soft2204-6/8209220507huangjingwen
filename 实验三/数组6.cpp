#include<iostream>
#include<string>
using namespace std;
int num[26]={0,0,0};//��0��25��ʾ��ĸa��z
int main()
{
	char c;
	int m = -1;//����ͳ����ĸ�Ƿ����
	string date;
	cout << "�������ַ���" << endl;
	cin >> date;
	for (int i = 0; i < date.size(); i++)
	{
		if (date[i] >= 'a' && date[i] <= 'z')
		{
			m = date[i] - 'a';
		}
		else if (date[i] >= 'A' && date[i] <= 'Z')
		{
			m = date[i] - 'A';
		}
		if (m != -1)
		{
			num[m]++;
		}
		m = -1;
	}
	for (int j = 0; j < 26; j++)
	{
		if (num[j] != 0)
		{
			c = j + 'a';
			cout << c << "����ĿΪ" << num[j] << endl;
		}
	}
	return 0;
}
