#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> vec(n-1);
    long long sum = 0;
    for(auto& v : vec) {
        cin >> v;
        sum += v;
    }
    cout << sum * (-1) << endl;
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