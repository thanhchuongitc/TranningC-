#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
    long long n;
    cin >> n;
    long long ans=1;
    for (int i=2;i<=(int)sqrt(n);i++)
    {
        if (n%i==0)
            ans+=i + (n/i);
    }
    if (ans == n)
        cout << "YES";
    else cout << "NO";
    return 0;
}
