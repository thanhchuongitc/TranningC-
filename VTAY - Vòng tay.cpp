#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int t=7;
    int p=0;
    int tam=n/7;
    if (n>7)
    {
        if (tam%2!=0)
        {
            t=n-(7*tam);
            p=7-t;
        }
        else
        {
            p=n-(7*tam);
            t=7-p;
        }
    }
    else
    {
        t=7-n;
        p=7-t;
    }
    cout<<t<<" "<<p;
    return 0;
}
