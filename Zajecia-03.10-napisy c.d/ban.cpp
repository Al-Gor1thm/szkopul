#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    short tables = 0, n, currid = -1, last; cin >> n;
    short a[n];
    for (short i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i]--;
    }
    for(short i = 0; i < n;)
    {
        if(a[i]+1)//if it was not visited before
        {
            if(currid + 1 && a[i] == currid)
            {
                currid = -1;//0 when checking
                tables++;
                last = i;
                i = a[i];
                a[last] = -1;
            }
            else if(a[i] == i)
            {
                tables++;
                a[i] = -1;
            }
            else//activate a new table search or continue current search
            {
                if(!(currid + 1))
                    currid = i;
                last = i;
                i = a[i];
                a[last] = -1;
            }
        }
        else
            i++;
    }
    cout << tables;
    return 0;
}