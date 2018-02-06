#include <bits/stdc++.h>
using namespace std;




int main()
{
    
	int n;
	cin >> n;
	string s;
	while (n--)
    {
        bool flag = false;
        cin >> s;
        for (int i=0;i<s.size()/2;i++)
            if (s[i]!=s[s.size()-1-i])
                flag = true;
        if (flag == false)
            cout << s << " ";

    }


    return 0;
}
