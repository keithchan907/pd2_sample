#include<iostream>
using namespace std;
int main()
{
	int n,a;
	cin >> n ;
	cout << n<<" ";
	while (n != 1)
	{
		a = n % 2;
		if (a != 0)
		{
			n = 3 * n + 1;
		}
		else
		{
			n = n / 2;
		}
		cout << n<<" " ;
	}
	return 0;
}

