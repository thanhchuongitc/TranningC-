#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    if (n<2)
    {
        cout << "NO";
        return 0;
    }
    int i;
    for (i=2;i<=(int)sqrt(n);i++)
        if (n%i==0)
        {
            cout << "NO";
            return 0;
        }
    cout << "YES";
    return 0;
}
