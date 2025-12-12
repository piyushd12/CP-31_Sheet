#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long x,n;
    cin >> x >> n;
    long long res;

    if(n % 4 == 0) res = 0;
    else if(n % 4 == 1) res = -n;
    else if(n % 4 == 2) res = 1;
    else res = n+1;
    
    if(x & 1) cout << x - res << endl;
    else cout << x + res << endl;
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