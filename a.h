#include<iostream>
#include <cmath>
#include<utility>
using namespace std;
class aaa
{
public:
	void set(int a, int b,double e)
	{
		ra = a;
		rb = b;
		ae = e;
	}
	int Ea()
	{
		EA = 1 / (1 + pow(10, (rb - ra) / 400));
		return 1;
	}
	int Eb()
	{
		EB = 1 / (1 + pow(10, (ra - rb) / 400));
		return 1;
	}
	int Rac()
	{
		int d = 1;
	    raa= ra + 32 * (ae - EA)+0.5;
		rbb = rb + 32 * ((1 - ae) - EB)+0.5;
		cout << raa << " " << rbb << endl;
		return 1;
	}
		int rt()
{
return raa;
}
int rtt()
{return rbb;
}

private:
	double EA;
	double EB;
	double ra;
	double rb;
	double ae;
	int raa;
	int rbb;
};
