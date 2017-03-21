#include <iostream>
#include <string>
#include <cmath>
#include <time.h>  
#include <stdlib.h>  
using namespace std;

int main(int argc, char *argv[])
{
	cout << "1 2 3 4 5 6 7 8" << endl;
	int gameCountdown;
	int mana;
	int card1;
	int card2;
	int card3;
	int card4;
	cin >> gameCountdown;
	cin >> mana;
	cin >> card1;
	cin >> card2;
	cin >> card3;
	cin >> card4;
	int num[4] = { card1,card2,card3,card4 };
	for (int j = 0; j<=3; j++)
	{
		if (num[j]>num[j + 1])
		{
			int k = num[j];
			num[j] = num[j - 1];
			num[j - 1] = k;
		}
	}
	for (size_t i = 0; i < 4; i++)
	{
		cout << num[i];
	}
	system("pause");
	while (1)
	{
		int a = rand() % 20 + 1;
		int b = rand() % 12 + 8;
		cout << "1 " << num[0] << a << " " << b << endl;
		cout << "1 " << num[1] << a << " " << b << endl;
		cout << "1 " << num[2] << a << " " << b << endl;
		cout << "1 " << num[3] << a << " " << b << endl;
		cout << 0 << endl;
	}
}
