#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    do
    {
        int n;
        cin >> n;
        if (n==0)
            return 0;
        queue<int> q;
        stack<int> s;
        while (n--)
        {
            int x;
            cin >> x;
            q.push(x);
        }
        int bs = 1;
        while (!q.empty())
        {
            if (bs == q.front())
                bs++;
            else
                s.push(q.front());
            while (!s.empty())
            {
                if (bs == s.top())
                    bs++,s.pop();
                else
                    break;
            }
            q.pop();
 
        }
        if (s.size()==0)
            cout << "yes\n";
        else
            cout << "no\n";
    }while(1);
    return 0;
}
