#include<iostream>
using namespace std;
int main()
{
	cout << "Welcome to C++!\n";
	int n;
	cout << "Please input n :\n";
	cin >> n;
	while (n != 1)
	{
		if (n % 2 == 0)
		{
			n = n / 2;
			cout << n << endl;
	}
		else
		{
			n = (n * 3) + 1;
			cout << n << endl;
		}

	}
}
