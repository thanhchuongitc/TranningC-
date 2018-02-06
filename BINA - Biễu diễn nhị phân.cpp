#include <iostream>
#include <vector>
using namespace std;

int main() 
{
	int n;
	vector<int>a;
	cin >> n;
	if (n == 0)
		cout << 0;
	else
	{
		int i = 0;
		while (n > 0)
		{
			a.push_back(n % 2);
			n /= 2;
			i++;
		}

		for (int j = i - 1; j >= 0; j--)
		{
			cout << a[j];
		}
	}
	return 0;

}
