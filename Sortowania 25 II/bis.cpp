#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m; cin >> n;
    bool hmm;
    int a[n];
    for(auto val : a){
        cin >> val;
    }
    cin >> m;
    int b[m];
    for(auto val : b){
        cin >> val;
    }
    for(int i = 0; i < m; i++){
        hmm = false;
        for(int g = 0; g < n; g++){
            if(b[i] == a[g]){
                cout << g << endl;
                hmm = true;
            }
        }
        if(hmm == false){cout << 'X' << endl;}
    }
    return 0;
}
