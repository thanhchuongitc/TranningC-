#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    long s=0;
    for(int i=n/2; i>0;i--)
    {
        if(n%i==0)
        {
            s+=i;
        }
    }
    if (s==n)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
