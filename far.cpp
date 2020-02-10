#include <bits/stdc++.h>

using namespace std;

int main()
{
    double red, blue, yellow, ired, iblue, iyellow, yellowroom, greenroom, blueroom, purpleroom, redroom, orangeroom;
    cin >> ired >> iyellow >> iblue >> yellowroom >> greenroom >> blueroom >> purpleroom >> redroom >> orangeroom;
    red = redroom - ired + (purpleroom+orangeroom)/2.0;

    blue = blueroom - iblue + (greenroom+purpleroom)/2.0;

    yellow = yellowroom - iyellow + (greenroom+orangeroom)/2.0;

    if(red < 0){red=0;}
    if(blue < 0){blue=0;}
    if(yellow < 0){yellow=0;}
    if(ceil(red)==red){int reda = red; cout << reda;}else{printf("%.1f", red);}
    cout << ' ';
    if(ceil(yellow)==yellow){int yellowa = yellow; cout << yellowa;}else{printf("%.1f", yellow);}
    cout << ' ';
    if(ceil(blue)==blue){int bluea = blue; cout << bluea;}else{printf("%.1f", blue);}
    cout << ' ';
    return 0;
}
