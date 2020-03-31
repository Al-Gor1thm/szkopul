#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, all;
    cin >> a >> b;
    all = a * b;
    cin >> a >> b;
    all += a * b;
    cout << all;
    return 0;
}
