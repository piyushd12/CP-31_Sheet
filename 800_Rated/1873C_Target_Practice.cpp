#include <bits/stdc++.h>
using namespace std;


int score(int i, int j){
    if((i == 0 || i == 9) || (j == 0 || j == 9)) return 1;
    if((i == 1 || i == 8) || (j == 1 || j == 8)) return 2;
    if((i == 2 || i == 7) || (j == 2 || j == 7)) return 3;
    if((i == 3 || i == 6) || (j == 3 || j == 6)) return 4;
    return 5;
}


void solve(){
    long long totalScore = 0;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            char x;
            cin >> x;
            if(x == 'X') totalScore += score(i,j);
        }
    }
    cout << totalScore << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}