#include <iostream>

using namespace std;

int main()
{
    int n, o;
    cin >> n >> o;
    n *= 1000;
    o *= 1000;
    if(7*o <= n){
        cout << 7*o;
    }
    else if(7*o/2 <= n){
        cout << 7*o/2;
    }
    else if(7*o/4 <= n){
        cout << 7*o/4;
    }
    else{
        cout << 0;
    }
    return 0;
}
