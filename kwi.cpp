#include <iostream>

using namespace std;

int main()
{
    int w = 0;
    int s;
    while(1){
        cin >> s;
        if(s==0){break;}
        if(s%2==0){w++;}
        else{w--;}
    }
    if(w==0){
        cout << "NIKT";
    }
    else if(w>0){
        cout << "GRAZYNA";
    }
    else {
        cout << "JANUSZ";
    }
    return 0;
}
