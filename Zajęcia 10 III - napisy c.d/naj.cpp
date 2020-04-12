#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string a, b; cin >> a >> b;
    char as = a.size(), bs = b.size(), curr = 0, maxi = 0;
    for(char i = 0; i < as; i++)
    {
        for(char c = 0; c < bs; c++)
        {
            for(char g = 0; a[i+g] == b[c+g] && as > i + g && as > c + g; g++)
            {
                curr++;
            }
            if(curr)
            {
                if(curr > min(as, bs))
                {
                    cout << short(curr);
                    return 1;
                }
                maxi = max(curr, maxi);
                curr = 0;
            }
        }
    }
    cout << short(maxi);
    return 0;
}