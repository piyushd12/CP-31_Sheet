#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n,q;
    cin >> n >> q;
    long long orgOddCnt = 0;
    vector<long long> pre(n+1,0);
    for(long long i=0;i<n;i++){
        long long x;
        cin >> x;
        if(x & 1) orgOddCnt++;
        pre[i+1] = orgOddCnt;
    }
    while(q--){
        long long l,r,k;
        cin >> l >> r >> k;
        long long oddInRange = pre[r] - pre[l-1];
        long long newOddCnt;
        if(k & 1) newOddCnt = orgOddCnt + (r - l + 1) - oddInRange;
        else newOddCnt = orgOddCnt - oddInRange; 
        // cout << orgOddCnt << " " << oddInRange << " " << newOddCnt << "\n";
        if(newOddCnt & 1) cout << "YES\n";
        else cout << "NO\n";
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