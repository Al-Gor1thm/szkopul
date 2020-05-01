#include <bits/stdc++.h>

using namespace std;

int main()
{
    int dzieci, i, l, m, licznik, mianownik, g;
    mianownik = 1;
    licznik = 1;
    cin >> dzieci;
    for(g = 0; g < dzieci; g++){
        cin >> l >> m;
        if(mianownik != m){
            l *= mianownik;
            licznik *= m;
            mianownik *= m;
        }
        licznik -= l;
        if(licznik <= 0){
            licznik = mianownik + (licznik % mianownik);
        }
        for(i = 2; i <= mianownik; i++){
            if((licznik % i == 0) && (mianownik % i == 0)){
                licznik /= i;
                mianownik /= i;
                i = 1; // reset the loop
            }
        }
    }
    if(licznik == mianownik || licznik == 0){cout << 1;}
    else{cout << licznik << '/' << mianownik;}
    return 0;
}
