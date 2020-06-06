#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int e, a, b, maxi = 0; cin >> e;
    vector<int> list[100];
    while(e--)
    {
        cin >> a >> b;
        list[a-1].push_back(b);
        if(maxi < a || maxi < b)
            maxi = max(a, b);
    }
    for(int i = 0; i < maxi; ++i)
    {
        cout << i + 1 << ": ";
        for(int j = 0; j < list[i].size(); ++j)
            cout << list[i][j] << ',';
        cout << endl;
    }
    return 0;
}