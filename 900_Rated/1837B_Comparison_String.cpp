#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int eqCnt = 1;
    int maxi = 1;
    for(int i=0;i<n;i++){
        if(s[i] == s[i+1]) eqCnt++;
        else{
            maxi = max(maxi,eqCnt);
            eqCnt = 1;
        }
    }
    maxi = max(maxi, eqCnt);
    cout << maxi + 1 << endl;
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