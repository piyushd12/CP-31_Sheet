// Seen Tutorial

#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n,k,x;
    cin >> n >> k >> x;
    long long totalSum = (n * (n + 1)) / 2;
    long long minSumPos = (k * (k+1)) / 2;
    long long maxSumPos = totalSum - ((n-k) * (n-k+1)) / 2;
    if(x >= minSumPos && x <= maxSumPos) cout << "YES\n";
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