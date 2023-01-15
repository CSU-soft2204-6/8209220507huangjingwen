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
	float j();//计算长方柱的体积
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
	cout << "请输入第一个长方柱的长，宽，高" << endl;
	c1.set_value();
	c1.j();
	cout << "第一个长方柱体积为：";
	c1.show_value();
	cout << "请输入第二个长方柱的长，宽，高" << endl;
	c2.set_value();
	c2.j();
	cout << "第二个长方柱体积为：";
	c2.show_value();
	cout << "请输入第三个长方柱的长，宽，高" << endl;
	c3.set_value();
	c3.j();
	cout << "第三个长方柱体积为：";
	c3.show_value();
	return 0;
}