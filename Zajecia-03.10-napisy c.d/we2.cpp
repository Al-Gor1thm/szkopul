#include <bits/stdc++.h>

using namespace std;

int countDiff(string a)
{
    int diffs = 1;
    sort(a.begin(), a.end());
    for(int i = 1; i < a.size(); i++)
    {
        if(a[i] != a[i - 1])
        {
            diffs++;
        }
    }
    return diffs;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    string large, curr;
    int maxl = 0;
    for(int i = 0; i < 1000; i++)
    {
        cin >> curr;
        if(countDiff(curr) > maxl)
        {
            maxl = countDiff(curr);
            large = curr;
        }
    }
    cout << large << ' ' << maxl;
    return 0;
}
