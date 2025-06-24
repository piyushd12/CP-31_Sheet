// Seen Tutorial

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int& i : v) cin >> i;
    int maxi = v[n-1] - v[0];
    for(int i=1;i<n;i++) maxi = max(maxi,v[i]-v[0]);
    for(int i=0;i<n-1;i++) maxi = max(maxi,v[n-1]-v[i]);
    for(int i=0;i<n-1;i++) maxi = max(maxi,v[i]-v[i+1]);
    cout << maxi << endl;
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