#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    string n;
    cin >> n;
    reverse(n.begin(), n.end());
    cout << stoi(n);
    return 0;
}
