#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);//just in case
    int n, k, g = 0, b = 0;//number, key, girls
    cin >> n >> k;
    int minboys = n;
    int a[n];//boyz and girlz
    for(auto& val : a){
        cin >> val;
        if(val == 0){g++;}
    }
    if(g < k){//key too large
        cout << "NIE";
    }
    else if(g == k){//key just right
        cout << n - k;
    }
    else{
        for(int i = 0; i < n - k; i++){//for every position before the key
            for(int c = 0; c < n - i; c++){//for every position after that
                if(a[i+c] == 0){
                    g++;
                    if(g == k){
                    minboys = min(minboys, b);
                    break;
                }
                }
                else{
                    b++;
                    c++;
                }

            }
        }
    }
    cout << minboys;
    return 0;
}
