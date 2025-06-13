#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int& i : v) cin >> i;
    sort(v.begin(),v.end(),[](int a, int b){
        return a > b;
    });
    int prev = v[0];
    for(int i=1;i<n;i++){
        if(prev == v[i]){
            cout << "NO\n";
            return;
        }
        prev = v[i];
    }
    cout << "YES\n";
    for(int i : v) cout << i << " ";
    cout << endl;
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