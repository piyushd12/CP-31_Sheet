#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int l = 0;
    int r = n-1;
    while(l <=r && s[l] != s[r]){
        l++;
        r--;
    }
    cout << r - l + 1 << endl; 
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