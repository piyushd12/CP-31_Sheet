#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    if(d < b){
        cout << -1 << endl;
        return;
    }
    int cnt = 0;
    cnt += d - b;
    if(a + cnt < c) {
        cout << -1 << endl;
        return;
    }
    cnt += a + cnt - c;
    cout << cnt << endl;
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