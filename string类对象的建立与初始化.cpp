#include<iostream>
#include<string>
using namespace std;
int main()
{
	char * S1 = "12345";
	string S2;
	string S3("abcde");
	string S4(S3);
	string S5(S3, 0, 3);
	string S6(S1, 3);
	string S7(7, 'F');
	cout << "S2=" << S2 << endl;
	cout << "S3=" << S3 << endl;
	cout << "S4=" << S4 << endl;
	cout << "S5=" << S5 << endl;
	cout << "S6=" << S6 << endl;
	cout << "S7=" << S7 << endl;
	return 0;
}