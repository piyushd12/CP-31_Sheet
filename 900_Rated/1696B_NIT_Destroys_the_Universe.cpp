// almost solved

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int& i : v) cin >> i;
    int cnt = 0;
    bool foundZero = false;
    int i = 0;
    while(i < n){
        if(v[i] == 0) foundZero = true;
        while(i < n &&  v[i] != 0) {
            foundZero = false;
            i++;
        }
        if(!foundZero) cnt++;
        if(cnt > 2) break;
        i++;
    }
    if(cnt > 2) cout << 2 << endl;
    else cout << cnt << endl;
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