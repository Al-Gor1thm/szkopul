#include <iostream>

using namespace std;

int main()
{
    int n, i;
    cin >> n;
    int a[n];
    int wynik = 0;
    for(i = 0; i < n; i++){
        cin >> a[i];
    }
    for(i = 1; i < (n-1); i++){
        if(a[i] > a[i-1] && a[i] > a[i+1]){wynik++;}
    }
    cout << wynik;
    return 0;
}
