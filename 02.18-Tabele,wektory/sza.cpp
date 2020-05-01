#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, i, h;
    long long average = 0;
    cin >> n;
    vector<int> w;
    for(i = 0; i < n; i++){
        cin >> h;
        w.push_back(h);
        average += w[i];
    }
    average /= n;
    sort(w.begin(), w.end());
    cout << average << endl;
    if(w[n/2] > average){
        cout << "TAK";
    }
    else{cout << "NIE";}
    return 0;
}
