#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int awers, rewers, monety;
    bool typ;
    awers = 0;
    rewers = 0;
    cin >> monety;
    for(int i = 1; i <= monety; i++){
        cin >> typ;
        if(typ == 1){awers++;}
        else{rewers++;}
    }
    if(awers>rewers){cout << rewers;}
    else{cout << awers;}
    return 0;
}
