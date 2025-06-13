#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n,x;
    cin >> n >> x;
    vector<int> v(n);
    for(auto& num : v) cin >> num;
    int maxi = v[0] - 0;
    for(int i=1;i<n;i++){
        maxi = max(maxi,v[i] - v[i-1]);
    }
    cout << max(maxi,2*(x - v[n-1])) << endl;
}


int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}