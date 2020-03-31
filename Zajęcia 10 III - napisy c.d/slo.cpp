#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int diffs = 2;
    bool test = false;
    string h;
    vector<string> a;
    while(1)
    {
        cin >> h;
        if(h == "prrr")
        {
            if(test == false)
            {
                cout << 1; return 0;
            }
            break;
        }
        a.push_back(h);
        test = true;
    }
    sort(a.begin(), a.end());
    for(int i = 1; i < a.size(); i++)
    {
        if(a[i] != a[i - 1])
        {
            diffs++;
        }
    }
    cout << diffs;
    return 0;
}
