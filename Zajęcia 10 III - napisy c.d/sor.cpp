#include <bits/stdc++.h>

using namespace std;

bool compare(const string &a, const string &b)
{
    if(a.size() == b.size())
        return a < b;
    else
        return a.size() < b.size();
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    string arr[n];
    for(auto val : arr)
        cin >> val;
    sort(arr, arr+n, compare);
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}
