#include <bits/stdc++.h>

using namespace std;

bool compare(const char &one, const char &two)
{
    if(one == ' ')
        return false;
    else if(two == ' ')
        return true;
    else if(!(one < 95 xor two < 95))
        return one < two;
    else
        return one > two;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n, num = 1; cin >> n;
    char last, curr;
    string g, a;
    getline(cin, g);
    for(int i = 0; i < n; i++)
    {
        getline(cin, a);
        g += a;
    }
    sort(g.begin(), g.end(), compare);
    if(g[0] == 32 || g[0] == 0)
    {
        cout << endl;
        return 0;
    }
    else if(g.size() == 1)
    {
        cout << g[0] << ' ' << 1 << endl;
        return 0;
    }
    last = g[0];
    for(n = 1; last != 32; n++)
    {
        if(n == g.size())
        {
            cout << curr << ' ' << num << endl;
            return 0;
        }
        curr = g[n];
        if(last == curr)
        {
            num++;
        }
        else
        {
            cout << last << ' ' << num << endl;
            num = 1;
            last = curr;
        }
    }
    return 0;
}
