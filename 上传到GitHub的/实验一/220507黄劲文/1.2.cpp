#include<iostream>
using namespace std;
const float �� = 3.1415926;
float Ga(float r,float h)
{
	float V;
	V = �� * r * r * h / 3;
	return V;
}
int main()
{
	cout << Ga(3.0, 4.0) << endl;
	return 0;
}
