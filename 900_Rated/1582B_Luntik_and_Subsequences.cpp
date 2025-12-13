#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int zeros = 0, ones = 0;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        if(x == 0) zeros++;
        else if(x == 1) ones++;
    }    
    long long res = pow(2,zeros) * ones;
    cout << res << endl;
    return;
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