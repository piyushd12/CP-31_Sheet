#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    unordered_map<int,int> mpp;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        mpp[x]++;
    }
    int maxFreq = 0;
    for(auto p : mpp) maxFreq = max(maxFreq, p.second);
    int ops = 0;
    while(maxFreq < n){
        int swapEles = min(maxFreq,n-maxFreq);
        ops += 1 + swapEles;
        maxFreq += swapEles;
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