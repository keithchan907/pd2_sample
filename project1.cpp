#include <iostream>
#include <string>
#include <time.h>  
using namespace std;

int main(int argc, char *argv[])
{
	srand(time_t(NULL));
	cout << "1 2 3 4 5 6 7 8" << endl;
	string zero;
	cin >> zero;
	while (1)
	{
		int a = rand() % 20;
		int b = rand() % 15;
		cout << "1 1 "<<a<<" "<<b << endl;
		cout << "1 2 " << a << " " << b << endl;
		cout << "1 3 " << a << " " << b << endl;
		cout << "1 4 " << a << " " << b << endl;
		cout << "1 5 " << a << " " << b << endl;
		cout << "1 6 " << a << " " << b << endl;
		cout << "1 7 " << a << " " << b << endl;
		cout << "1 8 " << a << " " << b << endl;
		cout << 0 << endl;
	}
}
