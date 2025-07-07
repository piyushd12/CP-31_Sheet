#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s,t;
    cin >> s >> t;
    int sn = s.length();
    int tn = t.length();

    // Approach 1 - Brute Force (mine) (TC - O(tn * sn), SC - O(tn))
    // if(tn == 1){
    //     for(int i=0;i<sn;i++){
    //         if(t[0] == s[i]){
    //             cout << "YES\n";
    //             return;
    //         }
    //     }
    //     cout << "No\n";
    //     return;
    // }
    // vector<int> dups(tn,0);
    // for(int i=0;i<tn;i++){
    //     for(int j=i+1;j<tn;j++){
    //         if(t[i] == t[j]) dups[i]++;
    //     }
    // }
    // vector<vector<int>> occr(tn,vector<int>(31,-1));
    // for(int i=0;i<tn;i++){
    //     for(int j=0;j<sn;j++){
    //         if(t[i] == s[j]) occr[i].push_back(j);
    //     }
    // }
    // for(int i=0;i<tn-1;i++){
    //     if(occr[i][occr[i].size() - dups[i] - 1] > occr[i+1][occr[i+1].size() - dups[i+1] - 1] 
    //          || occr[i][occr[i].size() - dups[i] - 1] == -1 
    //          || occr[i+1][occr[i+1].size() - dups[i+1] - 1] == -1){
    //         cout << "NO\n";
    //         return;
    //     }
    // }
    // cout << "YES\n";


    // Approach 2 - Optimized (TC - O(max(tn,sn)), SC - O(max(tn,sn)))
    unordered_map<char,int> mpp;
    for(char c : t) mpp[c]++;
    string rem = s;
    for(int i=sn-1;i>=0;i--){
        if(mpp[rem[i]] > 0) mpp[rem[i]]--;
        else rem.erase(rem.begin() + i);
    }
    if(rem == t) cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}