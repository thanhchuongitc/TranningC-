#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    int x,y;
    x = (b-2*a)/2;
    y = a - x;
    if (x >= 0 && y >= 0 && b%2==0)
        cout << y << " " << x;
    else
        cout << -1;
    return 0;
}
