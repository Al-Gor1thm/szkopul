#include <iostream>

using namespace std;
int main()
{
    float price1, price2, diam1, diam2, prop1, prop2;
    cin >> diam1 >> diam2 >> price1 >> price2;
    prop1 = diam1 * diam1 / price1;
    prop2 = diam2 * diam2 / price2;
    if(prop1 > prop2){cout << "MNIEJSZA";}
    else if(prop2 > prop1){cout << "WIEKSZA";}
    return 0;
}
