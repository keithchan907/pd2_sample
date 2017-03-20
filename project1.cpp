#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
	cout << "1 2 3 4 5 6 7 8" << endl;
	string zero;
	cin >> zero;
	int n = 0;
	while ( n < 20)
	{
		cout << "1 1 1 1" << endl;
		cout << "2 1 1 1" << endl;
		cout << "3 1 1 1" << endl;
		cout << "4 1 1 1" << endl;
		cout << "5 1 1 1" << endl;
		cout << "6 1 1 1" << endl;
		cout << "7 1 1 1" << endl;
		cout << "8 1 1 1" << endl;
		n = n + 1;
	}
	cout << 0 << endl;
	cin >> zero;
	return 0;
}
