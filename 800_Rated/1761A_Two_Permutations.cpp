#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,a,b;
    cin >> n >> a >> b;
    if((n == a && n == b) || (a + b + 2 <= n)) cout << "YES\n";
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