#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    string cipher, ciphered;
    for(int i = 0; i < n; i++)
    {
        cin >> ciphered >> cipher;
        if(ciphered.find(cipher) != string::npos)
        {
            cout << ciphered << endl;
        }
    }
    cout << 0;
    return 0;
}
