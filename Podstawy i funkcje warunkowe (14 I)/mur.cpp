#include <iostream>

using namespace std;
int main()
{
    int a, b, l;
    cin >> a >> b >> l;
    l /= 20;
    int e = 10*(a/2+b)/l;
    e = (e - (e % 10));
    if(e==90){cout << 80;}
    else{
    cout << e;
    }
    return 0;
}
