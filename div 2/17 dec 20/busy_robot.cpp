#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int ans[t];
    //int num1 = 2;
    for (int i = 0; i < t; i++)
    {
        ans[i] = 0;
        long cur = 0;
        long temp;
        long timer = 0;
        int n;
        //n = num1++;
        cin >> n;
        long t[n];
        long int x[n];
        //int num = 0;
        for (int j = 0;j<n;j++)
        {
            //t[j] = num++;
            //x[j] = ++num;
            cin >> t[j];
            cin >> x[j];
        }
        if (n == 1)
        {
            ans[i] = 1;
            continue;
        }
        int k = 0;
        int l = 0, lp = 0;
        while (1)
        {
            k = 0;
            timer = (x[l] - cur);
            if (x[lp] > cur)
            {
                k = 1;
            }
            else 
            {
                timer = timer*(-1);
            }
            while ((t[l] - timer) < t[lp] && l != n-1)
            {
                if (k)
                {
                    temp = (cur + (t[l+1] - t[l]));
                    if (x[l] >= cur && x[l] <= temp)
                    {
                        ans[i] += 1;
                    }
                    cur = temp;
                }
                else
                {
                    temp = (cur - (t[l+1] - t[l]));
                    if (x[l] <= cur && x[l] >= temp)
                    {
                        ans[i] += 1;
                    }
                    cur = temp;
                }
                
                l += 1;
            }
            if (l == n - 1)
            {
                break;
            }
            cur = x[lp];
            lp = l;
            
        }
        if ((t[l] - timer) < t[lp])
        {
            if (k)
            {
                if (x[l] >= cur && x[l] <= x[lp])
                {
                    ans[i] += 1;
                }
            }
            else
            {
                if (x[l] <= cur && x[l] >= x[lp])
                {
                    ans[i] += 1;
                }
            }
        }
        else
        {
            ans[i] += 1;
        }
    }
    for (int i = 0;i<t;i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}