#include <iostream>

using namespace std;
int main()
{
    int n, jump, maxjump;
    bool p;
    maxjump = 0;
    jump = 0;
    cin >> n;
    for(int i=0;i < n; i++){
        cin >> p;
        if(p == false){if(jump>maxjump){maxjump = jump;}jump = 0;}
        else if(p != false){jump++;}
    }
    if(jump>maxjump){maxjump = jump;}
    cout << maxjump;
    return 0;
}
