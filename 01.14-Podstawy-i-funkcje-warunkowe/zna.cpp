#include <iostream>

using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    if(m+n == m-n || m+n == m*n || m-n == m*n){
        cout << "NIE";
    }
    else if(m >= 0 && n >= 0){
        if(m==1||n==1){
            cout << m << '+' << n << '=' << m+n;
        }
        else{
            cout << m << '*' << n << '=' << m*n;
        }
    }
    else if(m >= 0 && n < 0){
        if(m-n < 0){cout << m << "-(" << n << ")=(" << m-n << ")";}
        else{cout << m << "-(" << n << ")=" << m-n;}
    }
    else if(m < 0 && n >= 0){
        if(m-n < 0){cout << "(" << m << ")+" << n << "=(" << m+n << ")";}
        else{cout << "(" << m << ")+" << n << "=" << m+n;}
    }
    else if(m < 0 && n < 0){
        cout << "(" << m << ")*(" << n << ")=" << m*n;
    }
   return 0;
}
