#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int cnt = 0;
    vector<int> prefix(n);
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        if(x == 2) cnt++;
        prefix[i] = cnt;
    }
    if(cnt % 2 == 0){
        for(int i=0;i<n;i++){
            if(prefix[i] == cnt - prefix[i]){
                cout << i+1 << endl;
                return;
            }
        }
    }
    cout << -1 << endl;
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