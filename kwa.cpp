#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long a, pole;
    cin >> a;
    pole = a * a;
    a /= 2;
    pole -= a * a;
    cout << pole;
    return 0;
}
