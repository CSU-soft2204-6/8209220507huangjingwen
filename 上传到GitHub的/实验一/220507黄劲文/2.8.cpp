#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a, x0, x1,n;
	cin >> n;
    a = fabs(n) ;
	x0 = a;
	x1 =  (x0 + a/x0)/2;
	do {
		x0 = x1;
		x1 = (x0 + a / x0)/2;
	} while (fabs(x1-x0) >1e-10);
	cout << "其平方根为" << x1 << endl;
		return 0;
}