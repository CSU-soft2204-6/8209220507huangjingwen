#include<iostream>
using namespace std;
class Time
{
private:
	int hour;
	int minute;
	int sec;
public:
	void SetTime(void)
	{
		cin >> hour >> minute >> sec;
	}
	void ShowTime(void)
	{
		cout << hour <<":" << minute<<":" << sec;
	}
};
int main()
{
	Time t1;
	t1.SetTime();
	t1.ShowTime();
	return 0;
}