#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int n,m,x;
	cin >> n >> m;
	if (m==1)
	{
		cout << 0;
		return 0;
	}
	vector<int> v;
	for (int i=0;i<n;i++)
	{
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(),v.end(),greater<int>());
	int sum = v[0],count=1;
	for (int i=1;i<v.size();i++)
	{
		if (sum>=m)
		{
			cout << count;
			return 0;
		}
		sum+= v[i]-1;
		count++;
	}
	cout << -1;
	return 0;
}
