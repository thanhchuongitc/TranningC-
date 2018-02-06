#include <iostream>
#include <map>
#include <vector>
#include <queue>
#include <functional>
using namespace std;
map<int,int> m;
map<int,int>::iterator it;
vector <int> b;
int path[100000000];
int main()
{
    int n;
    cin >> n;
    int temp,dem=0,sizez=0;
    for (int i=0;i<n;i++)
    {
       cin >> temp;
       path[temp]++;
       if (path[temp] >=3)
       {
           dem++;
           b.push_back(temp);
           path[temp] = 0;
       }
    }
    cout << dem << endl;
    for (int i=0;i!=b.size();i++)
        cout << b[i] << " ";
    return 0;
}
 
