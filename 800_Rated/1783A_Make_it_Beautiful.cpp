#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int& i : v) cin >> i;
    sort(v.begin(),v.end());
    if(v[0] == v[n-1]) cout << "NO\n";
    else{
        cout << "YES\n";
        cout << v[n-1] << " ";
        for(int i=0;i<n-1;i++) cout << v[i] << " ";
        cout << endl;
    }
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