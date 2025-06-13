#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int maxi = INT_MIN;
    int curr = 0;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        if(x == 0) curr++;
        if(x == 1) curr = 0;
        maxi = max(maxi,curr);
    }
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