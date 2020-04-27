#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m; cin >> n >> m;
    int tower[n];
    for(auto val: tower)
        cin >> val;
    int ppl[m];
    for(auto val : ppl)
        cin >> val;
    int answers[m] = {};
    for(int i = 0; i < m; i++){
        for(int g = 0; g < n; g++){
            if(ppl[i] > tower[g]){
                answers[i]++;
                continue;
            }
            else{break;}
        }
    }
    for(int i = 0; i < m; i++)
        cout << answers[i] << ' ';
    return 0;
}
