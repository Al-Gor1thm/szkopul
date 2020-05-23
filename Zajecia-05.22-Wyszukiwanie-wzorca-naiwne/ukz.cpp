#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n, a, b = 1; cin >> n >> a;
    string key, input, output = ""; cin >> key >> input;
    for(int i = 0; i < a - 2; ++i)
    {
        if(key[0] == input[i] && key[1] == input[++i])
        {
            while(b < n && key[++b] == input[++i])
                continue;
            output += input[i];
            b = 1;
        }
    }
    cout << output;
    return 0;
}