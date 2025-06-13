#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int& i : a) cin >> i;
    sort(a.begin(),a.end());
    if(a[0] == a[n-1]) cout << -1 << endl;
    else{
        int idx = 0;
        while(a[idx] == a[0]) idx++;
        cout << idx << " " << n - idx << endl;
        for(int i = 0;i < idx; i++) cout << a[i] << " ";
        for(int i = idx; i < n;i++) cout << a[i] << " ";
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