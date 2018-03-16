#include <bits/stdc++.h>
using namespace std;
int a[10] = {6,2,5,5,4,5,6,3,7,6};
int main()
{
    
    int n;
    cin >> n;
    for (int h1=0;h1<=2;h1++)
        for (int h2 = 0;h2<=9;h2++)
            for (int m1 = 0;m1<6;m1++)
                for (int m2 = 0;m2<=9;m2++)
                    if (a[h1]+a[h2]+a[m1]+a[m2] == n)
                {
                    cout << h1 << h2 << ":" << m1 << m2;
                    return 0;
                }
    cout << "Impossible";
    return 0;
}
