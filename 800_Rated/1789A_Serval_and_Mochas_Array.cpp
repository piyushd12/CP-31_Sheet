#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int& i : v) cin >> i;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(__gcd(v[i],v[j]) <= 2){
                cout << "YES\n";
                return;
            }
        }
    }
    cout << "NO\n";
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