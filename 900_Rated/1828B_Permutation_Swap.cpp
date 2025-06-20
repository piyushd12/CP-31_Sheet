#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int k = 0;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        k = __gcd(k,abs(x-(i+1)));
    }
    cout << k << endl;
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