#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int isles, bridges, a, b; cin >> isles >> bridges;
    int good[isles] = {0};
    while(bridges--)
    {
        cin >> a >> b;
        good[--a]++;
        good[--b]++;
    }
    bridges++;
    for(auto val : good)
        if(val <= 1)
            bridges++;
    cout << bridges;
    return 0;
}