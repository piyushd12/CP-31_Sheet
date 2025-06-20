#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n,k;
    cin >> n >> k;
    vector<long long> v(n);
    for(long long& i : v) cin >> i;
    sort(v.begin(), v.end());
    long long maxCnt = 1;
    long long currCnt = 1;
    for(long long i=0;i<n-1;i++){
        if(v[i+1] - v[i] <= k) currCnt++;
        else{
            maxCnt = max(maxCnt, currCnt);
            currCnt = 1;
        }
    }
    cout << n - max(maxCnt, currCnt) << endl;
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