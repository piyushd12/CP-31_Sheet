#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int& i :v){
        cin >> i;
        if(i == 1) i++;
    }
    for(int i=0;i<n-1;i++) if(v[i+1] % v[i] == 0) v[i+1]++;
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