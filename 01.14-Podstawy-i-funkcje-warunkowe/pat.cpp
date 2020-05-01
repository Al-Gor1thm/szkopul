#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if(a == c && a == b){
        cout << 2;
    }
    else if((a*a+b*b==c*c)||(a*a+c*c==b*b)||(b*b+c*c==a*a)){
        cout << 1;
    }
    else{
        cout << 0;
    }
    return 0;
}
