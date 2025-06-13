#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin >> n >> k;
    vector<int> vec(n);
    for(auto& v:vec) cin >> v;
    for(int num : vec){
        if(num == k){
            cout << "YES" << endl;
            return;
        }
    } 
    cout << "NO" << endl;
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