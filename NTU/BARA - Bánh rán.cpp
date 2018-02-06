#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;
    if (n>=k)
    {
        int ans = 0;
        int a,b;
        while (n>0)
        {
            if (n<k)
            {
                if (n>k/2)
                    ans+=10;
                else
                    ans+=5;
                break;
            }
            ans+=10;
            n-=k;

        }
        cout << ans;
    }
    else
        cout << 10;
    return 0;
}
