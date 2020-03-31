#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int h, nh, g;
    cin >> h >> nh >> g;
    if(h >= nh){
        cout << 0;
    }
    else{
        nh -= h;
        if(nh % g == 0){cout << nh / g;}
        else{cout << (nh/g)+1;}
    }
    return 0;
}
