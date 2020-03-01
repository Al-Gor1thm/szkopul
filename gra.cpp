#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, treason = 0; cin >> n;
    int a[n], b[n/2];//players, teams
    for(auto& val: a)
        cin >> val;
    sort(a, a+n);//from this moment we have a sorted array of player skills
    for(int i = 0; i < n/2; i++){//we will have n/2 teams
        b[i] = a[i]+a[n-i-1];//teams from best+worst to the most average duo
    }
    sort(b, b+(n/2));//last one is the largest score
    for(int i = 0; i < (n/2)-1;i++){
        treason += b[n/2-1] - b[i];
    }
    cout << treason;
    return 0;
}
