#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int n;
	cin >> n;
	vector<int> v;
	for (int i = 0;i!=n;i++)
	{
		int x;
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(),v.end());
	int mins = 1e9;
	for (int i=1;i!=v.size();i++)
		mins = min(mins,v[i]-v[i-1]);
	cout << mins;
	return 0;
}
