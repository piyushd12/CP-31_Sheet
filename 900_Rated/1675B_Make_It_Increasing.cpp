#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int& i : v) cin >> i;
    long long ops = 0;
    for(int i=n-1;i>0;i--){
        if(v[i] == 0){
            cout << -1 << endl;
            return;
        }
        while(v[i] <= v[i-1]){
            v[i-1] /= 2;
            ops++;
        }
    }
    cout << ops << endl;
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