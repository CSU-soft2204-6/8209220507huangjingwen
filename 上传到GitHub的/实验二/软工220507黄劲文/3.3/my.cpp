#include<iostream>
#include"my.h"
using namespace std;
double fahrenheit_to_cels(double fah)
{
	double s;
	s = (fah - 32) / 1.8;
	
	return s;
		
}
double celsius_to_fah(double cel)
{
	double h;
	h = 32 + cel * 1.8;
	
	return h;
}