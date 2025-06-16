#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    unordered_map<char, int> freq;
    for(char c : s) freq[c]++;
    int oddCnt = 0;
    for(auto& p : freq) if(p.second % 2 == 1) oddCnt++;
    if(oddCnt > k + 1) cout << "NO\n";
    else cout << "YES\n";
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