#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n; cin >> n;
    cout << n / 3600 << 'g' << (n / 60) % 60 << 'm' << (n % 60) % 60 << 's';
    return 0;
}
