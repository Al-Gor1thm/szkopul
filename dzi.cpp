#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k, placeholder; cin >> n >> k;
    int diff = n;
    vector<int> girls;
    for(int i = 0; i < n; i++)
    {
        cin >> placeholder;
        if(placeholder == 0)
        {
            girls.push_back(i);
        }
    }
    if(girls.size() < k)
    {
        cout << "NIE";
        return 0;
    }
    else
    {
        for(int i = 0; i <= girls.size() - k; i++)
        {
            diff = min(diff, (girls[i+k-1] - girls[i]));
        }
        cout << diff - k + 1;
        return 0;
    }
}
