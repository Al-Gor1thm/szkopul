#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n, a, b; cin >> n >> a >> b;
    if(n % (a + b) - a >= 0)
        cout << 0;
    else
        cout << 1;
    return 0;
}
