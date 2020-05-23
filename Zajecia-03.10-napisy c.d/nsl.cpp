#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n, maxstr = 0; cin >> n;
    string stuff;
    for(int i = 0; i < n; i++)
    {
        cin >> stuff;
        maxstr = max(maxstr, (int)(stuff.length()));
    }
    cout << maxstr;
    return 0;
}
