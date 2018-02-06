#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int times = 0;
    long long ans=0;
    int temp;
    vector<int> a;
    for (int i=0;i!=n;i++)
    {

        cin >> temp;
        a.push_back(temp);
    }
    sort(a.begin(),a.end(),greater<int>());
    for (int i=0;i!=a.size();i++)
    {
        if (a[i] - times > 0)
            ans+=a[i]-times++;
    }
    cout << ans;
    return 0;
}
