#include <iostream>

using namespace std;

int main()
{
    int n,q1=0,q2=0;
    cin >> n;
    int temp;
    for (int i=0;i!=n;i++)
    {
        cin >> temp;
        if (temp == 100)
            q1+=1;
        else
            q2+=1;
    }
    if (q1%2!=0)
        cout << "NO";
    else if (q1==0 && q2%2!=0)
        cout << "NO";
    else cout << "YES";
    return 0;
}
