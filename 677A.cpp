#include <iostream>
using namespace std;

int main()
{
	int n, h;
	cin >> n >> h;
	int *a = NULL;
	a = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int tong = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > h)
			tong += 2;
		else
			tong++;
	}
	cout << tong;
	return 0;
}
