#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int tand;
    cin >> tand;
    for(int i=1;i<n;i++) {
        int x;
        cin >> x;
        tand &= x;
    }
    cout << tand << endl;
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