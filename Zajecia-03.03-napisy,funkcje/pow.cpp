#include <bits/stdc++.h>

using namespace std;

int main()
{
    string hello, hell = "";
    cin >> hello;
    for(int i = 0; i < hello.string::size(); i++)
    {
        if(hello[i]!=hello[i+1])
        {
            hell += hello[i];
        }
    }
    cout << hell;
    return 0;
}
