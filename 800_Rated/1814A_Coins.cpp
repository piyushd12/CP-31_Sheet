#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin >> n >> k;
    if(n % 2 == 0 || n % k == 0) {
        cout << "YES\n"; 
        return;
    }
    else if(n % 2 == k || n % k == 2) {
        cout << "YES\n"; 
        return;
    }
    else cout << "NO\n";
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