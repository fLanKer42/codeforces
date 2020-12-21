#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    int ans[t];
    for (int i = 0; i < t;i++)
    {
        long v[3];
        for (int j = 0; j < 3; j++)
        {
            cin >> v[j];
        }
        long long sumer = v[0] + v[1] + v[2];
        if (sumer%9 != 0)
        {
            ans[i] = 0;
        }
        else
        {
            if (min({v[0],v[1],v[2]}) < (sumer/9))
            {
                ans[i] = 0;
            }
            else
            {
                ans[i] = 1;
            }
        }
    }
    
    for (int i = 0;i<t;i++)
    {
        if (ans[i] == 0)
        {
            cout << "NO" << endl;
        }
        else 
        {
            cout << "YES" << endl;
        }
        
    }
        
    return 0;
}