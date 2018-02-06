#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string str;
    cin >> n >> str;
    string temp = "";
    for (int i = 0;i!=str.size();i++)
    {
        if (str[i] < 97)
            str[i]+=32;
        if (temp.find(str[i])==-1)
            temp+=str[i];
    }
    if (temp.size()==26)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
