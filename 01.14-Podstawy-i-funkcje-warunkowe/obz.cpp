#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x1, y1, x2, y2, x, y;
    cin >> x1 >> y1 >> x2 >> y2;
    x = x2 - x1;
    y = y2 - y1;
    cout << x*y;
    return 0;
}
