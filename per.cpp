#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n, g, i;
    vector<int> stuff;
    cin >> n;
    for(i = 0; i < n; i++){
        cin >> g;
        stuff.push_back(g);
    }
    sort(stuff.begin(), stuff.end());
    for(i = 0; i < n; i++){
        if(stuff[i] != i + 1){
            cout << "NIE";
            return 0;
        }
    }
    cout << "TAK";
    return 0;
}
