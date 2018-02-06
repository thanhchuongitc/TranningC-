#include <iostream>
#include <string>
using namespace std;
int main ()
{
	string s = "hello";
	string str;
	cin >> str;
	int k = 0;
	for (int i=0;i!=str.size();i++)
	{
		if (str[i]==s[k])
			k++;
	}
	if (k==s.size())
		cout <<"YES";
	else 
		cout <<"NO";
	return 0;
}
