#include<iostream>
using namespace std;
int main()
{
	shared_ptr<int>a(new int);
	*a = 66;
	cout << a.use_count() << endl;
	shared_ptr<int> b;
	b = a;
	cout << a.use_count() << endl;
	a.reset();
	cout << b.use_count() << endl;
	cout << *b << endl;
	unique_ptr<int> c(new int);
	*c = 7;
	cout << *c;
	return 0;
}