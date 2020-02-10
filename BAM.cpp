#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    double d, h, b;
    cin >> h >> d;
    b = (h-(d*d/h))/2;
    printf("%.2f",b);
    return 0;
}
