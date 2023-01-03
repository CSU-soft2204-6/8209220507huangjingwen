#include<iostream>
using namespace std;
float H(float F)
{
	float S;
	S = (F - 32) / 1.8;
	return S;
}
int main()
{
	float F;
	cin >> F;
	cout << "ÉãÊÏ¶ÈÎª" << H(F) << endl;
	return 0;
}