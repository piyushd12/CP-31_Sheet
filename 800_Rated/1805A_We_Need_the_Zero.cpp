#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int xr = 0;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        xr ^= x;
    }
    if(xr == 0) cout << 0;
    else {
        if(n % 2 == 1) cout << xr;
        else cout << -1;
    }
    cout << endl;
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