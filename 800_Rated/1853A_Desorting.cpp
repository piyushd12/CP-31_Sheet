#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int minDiff = INT_MAX;
    int prev;
    cin >> prev;
    bool isSorted = true;
    for(int i=1;i<n;i++){
        int x;
        cin >> x;
        if(x < prev) isSorted = false;
        minDiff = min(minDiff,x - prev);
        prev = x;
    }
    if(isSorted) cout << (minDiff / 2) + 1 << endl;
    else cout << 0 << endl;
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


