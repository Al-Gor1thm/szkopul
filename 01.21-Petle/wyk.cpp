#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    int n, num, cut;
    int currnum = 1;
    cut = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> num;
        if(num == currnum){
            currnum++;
        }
        else{cut++;}
    }
    cout << cut;
    return 0;
}
