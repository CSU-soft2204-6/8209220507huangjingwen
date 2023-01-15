#include<iostream>
#include<math.h>
using namespace std;
class Shape
{

public:
	virtual double S() 
	{
		return 0;
	};
};
class Circle :public Shape
{
public:
	const double PI = 3.14;
	double r;
	Circle(double r)
	{
		this->r = r;
	}
	virtual double S()
	{
		
		return PI*r*r;
	}
};
class Square:public Shape
{public:
	double side;
	Square(double side)
	{
		this->side = side;
	}
	double S()
	{
		return side * side;
	}

};
class Rectangle :public Shape
{public:
	double length, width;
	Rectangle(double length, double width)
	{
		this->length = length;
		this->width = width;
	}
	double S()
	{
		return length * width;
	}
};
class Trapezoid :public Shape
{public:
	double sd, xd, h;//梯形的上底下底和高
	Trapezoid(double sd, double xd, double h)
	{
		this->sd = sd;
		this->xd = xd;
		this->h = h;
	}
	double S()
	{
		return (sd + xd) * h * 0.5;
	}

};
class Triangle :public Shape
{public:
	double l1, l2, l3;
	Triangle(double l1,double l2,double l3)
	{
		this->l1 = l1;
		this->l2 = l2;
		this->l3 = l3;
	}
	double S()
	{
		double P;
		P = (l1 + l2 + l3) * 0.5;
     return sqrt(P*(P - l1)*(P - l2)*(P - l3));
	}
};
int main()
{
	Circle circle(10.2);
	Square square(3);
	Rectangle rectangle(3, 4);
	Trapezoid trapezoid(2.0, 4.5, 3);
	Triangle triangle(4, 5, 6);
	Shape* p[5] = { &circle,&square,&rectangle,&trapezoid,&triangle };
	cout << "圆形面积为" << p[0]->S() << endl;
	cout << "正方形面积为" << p[1]->S() << endl;
	cout << "长方形面积为" << p[2]->S() << endl;
	cout << "梯形面积为" << p[3]->S() << endl;
	cout << "三角形面积为" << p[4]->S() << endl;
	double H;
	H = (p[0]->S()) + (p[1]->S()) + (p[2]->S()) + (p[3]->S()) + (p[4]->S());
	cout << "他们的面积和为" << H;
	return 0;
}