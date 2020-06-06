#include <bits/stdc++.h>

using namespace std;

int bin2dec(string n)
{
    int out = 0;
    int multiplier = 1;
    for(int i = n.length() - 1; i + 1; i--)
    {
        out += (n[i] == '1') ? multiplier : 0;
        multiplier *= 2;
    }
    return out;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    char in; string out = "";
    int n, ones = 0, zeroes = 0; cin >> n;
    while(n--)
    {
        cin >> in;
        if(in == 'n')//that was the most confusing excercise I've ever read there
            ones++;
        if(in == 'z')
            zeroes++;
    }
    while(ones--)
        out += '1';
    while(zeroes--)
        out += '0';
    cout << out << ' ' << bin2dec(out);
    return 0;
}