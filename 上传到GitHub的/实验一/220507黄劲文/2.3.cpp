#include<iostream>
using namespace std;
float J(float a, float b, float c)
{
	float L;
	L = a + b + c;
	return L;

}
float a, b, c;
int main()
{
	cin >> a>>b>>c;
	if ((a + b > c && a - b < c) && (a == b || a == c || b == c))
		cout << "周长为" << J(a, b, c) << endl << "其为等腰三角形" << endl;
	else cout << "周长为" << J(a, b, c) <<endl<< "其不为等腰三角形" << endl;
	return 0;
}