#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long a,b;
    cin >> a >> b;
    long long mini = min(a,b);
    if(a == b) cout << 0 << " " << 0 << endl;
    else{
        long long gcd = abs(a-b);
        long long min_moves = min(mini % gcd, gcd - mini % gcd);
        cout << gcd << " " << min_moves << endl;
    } 
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