#include<iostream>
using namespace std;
class Column
{
private:
	float a;
	float b;
	float c;
	float v;
public:
	void set_value();
	float j();//���㳤���������
	void show_value();
};
void Column::set_value()
{
	cin >> a;
	cin >> b;
	cin >> c;
}
float Column::j()
{
	v= a * b * c;
	return v;
}
void Column::show_value()
{
	cout << v << endl;
}
int main()
{
	Column c1, c2, c3;
	cout << "�������һ���������ĳ�������" << endl;
	c1.set_value();
	c1.j();
	cout << "��һ�����������Ϊ��";
	c1.show_value();
	cout << "������ڶ����������ĳ�������" << endl;
	c2.set_value();
	c2.j();
	cout << "�ڶ������������Ϊ��";
	c2.show_value();
	cout << "������������������ĳ�������" << endl;
	c3.set_value();
	c3.j();
	cout << "���������������Ϊ��";
	c3.show_value();
	return 0;
}