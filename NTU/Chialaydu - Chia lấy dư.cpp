#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;
    vector<int> v (100005,false);
    int x;
    int dem = 0;
    while (n--)
    {
        cin >> x;
        if (!v[x%k])
        {
            dem++;
            v[x%k] = true;
        }

    }
    cout << dem;
    return 0;
}
