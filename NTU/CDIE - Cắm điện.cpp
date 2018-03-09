#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    int n, m;
    cin >> n >> m;
    if (m==1)
    {
        cout << 0;
        return 0;
    }
    vector<int> a;
    int temp;
    for (int i=0;i!=n;i++)
    {
        cin >> temp;
        a.push_back(temp);
    }
    sort(a.begin(),a.end(),greater<int>());
    queue<int> q;
    for (int i=0;i!=a.size();i++)
        q.push(a[i]);
    int tong = q.front();
    q.pop();
    int dem=1;
    while (!q.empty())
    {
        if (tong < m)
        {
            tong+= q.front() - 1;
            dem++;
            q.pop();
        }
        else
        {
            cout << dem;
            return 0;
        }
    }
    cout << -1;
    return 0;
}
