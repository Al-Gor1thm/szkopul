#include <bits/stdc++.h>

using namespace std;

//WIP

string divby2(string n, short a)
{
    int i = a - 1;
    n[i] = ((n[i] - '0') / 2) + '0';
    for(i--; i + 1; i--)
    {
        n[i + 1] += (n[i] % 2 ? 5 : 0);
        n[i] = ((n[i] - '0') / 2) + '0';
    }
    return n;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    string total, dif; cin >> total >> dif;
    short a = total.size();
    total = divby2(total, a);
    total[a - 1]++;
    if(total[0] == '0' && a > 1)
    {
        total.erase(0, 1);
        a--;
    }
    cout << total << endl;
    total[a - 1] -= 2;
    cout << total << endl;
    return 0;
}