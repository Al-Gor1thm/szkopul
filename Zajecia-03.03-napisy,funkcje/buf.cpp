#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n, b, amount = 0; cin >> n >> b;
    string test;
    for(int i = 0; i < n; i++)
    {
        cin >> test;
        if(test.string::size() > b)
            amount++;
    }
    cout << amount;
    return 0;
}
