#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    vector<int>a;
    cin >> n;
    a.push_back(0);
    int temp;
    for (int i=1;i<=n;i++)
    {

        cin >> temp;
        a.push_back(a[i-1]+temp);
    }
    int m;
    cin >> m;
    while (m--)
    {
        cin >> temp;
        cout << lower_bound(a.begin(),a.end(),temp) - a.begin() << " ";
    }
    return 0;
}
    
