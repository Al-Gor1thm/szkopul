#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n, e, a, b; cin >> n >> e;
    bool graph[n][n];
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < n; ++j)
            graph[i][j] = 0;
    while(e--)
    {
        cin >> a >> b;
        graph[--a][--b] = 1;
        graph[b][a] = 1;
    }
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
            cout << graph[i][j];
        cout << endl;
    }
    return 0;
}