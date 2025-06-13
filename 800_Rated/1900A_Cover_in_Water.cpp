#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    string s;
    cin >> n >> s;
    bool canReplace = false;
    int emptyCnt = 0;
    int consq3s = 0;
    for(int i=0;i<n;i++){
        if(s[i] == '.'){
            emptyCnt++;
            consq3s++;
            if(consq3s >= 3) {
                canReplace = true;
                break;
            }
        }
        else consq3s = 0;
    }
    if(canReplace) cout << 2 << endl;
    else cout << emptyCnt << endl;
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