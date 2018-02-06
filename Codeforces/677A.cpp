#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, h;
	cin >> n >> h;
	vector<int>a;
  int x;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
    a.push_back(x);
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
