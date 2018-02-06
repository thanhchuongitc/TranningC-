#include <iostream>
using namespace std;

int main() 
{
	long long n;
	cin >> n;
	int tong = 0;
	while (n > 0)
	{
		tong += n % 10;
		n /= 10;
	}
	if (tong %10 == 9)
		cout << "YES";
	else cout << "NO";
	return 0;

}
