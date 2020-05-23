#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n, a, i = 0; cin >> n;
    do
    {
        i++;
        if(i == n)
        {
            cout << 0;
            return 0;
        }
        cin >> a;
    } while (i != a);
    cout << a;
    return 0;
}