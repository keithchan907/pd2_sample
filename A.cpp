#include<iostream>
#include"a.h"
using namespace std;
int main()
{
	int a = 1613;
	int b = 1609;
	double e = 0;
	cout << a << " " << b<<endl;
	for (int i = 0; i <= 5; i++)
	{
		if (i==1 )
		{
			e = 0.5;
		}
		if (i == 2)
		{
			e = 0.5;
		}
		if (i==3)
		{
			e = 0;
		}
		if (i == 4)
		{
			e = 0;
		}
		if (i == 5)
		{
			e = 0;
		}
		aaa find;
		find.set(a, b, e);
		find.Ea();
		find.Eb();
		find.Rac();
		a = find.rt();
		b = find.rtt();
	}
}
