#include <bits/stdc++.h>
using namespace std;

int ops_req(string n, string val){
    int ops = 0;
    int idx = 1;
    for(int i=n.size()-1;i>=0;i--){
        if(n[i] == val[idx]){
            idx--;
            if(idx < 0) return ops;
        }
        else ops++;
    }
    if(idx >= 0) return INT_MAX;
}

void solve(){
    string n;
    cin >> n;
    vector<string> pos_vals = {"00","25","50","75"};
    int res = INT_MAX;
    for(string val : pos_vals) res = min(res,ops_req(n,val));
    cout << res << endl;
    return;
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