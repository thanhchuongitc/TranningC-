#include <bits/stdc++.h>
using namespace std;
int n,k;
vector<int> v;

int main()
{
    cin >> n >> k;
    int temp;
    for (int i=0;i!=n;i++)
    {
        cin >> temp;
        v.push_back(temp);
    }
    for (int i=0;i!=n;i++)
    {
        if (binary_search(v.begin()+1,v.end(),v[i]+k))
        {
            cout << v[i] << " " << v[i] + k;
            return 0;
        }

    }
    cout << -1;
    return 0;
}
