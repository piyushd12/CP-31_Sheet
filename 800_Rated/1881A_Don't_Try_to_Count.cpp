#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,m;
    cin >> n >> m;
    string x,s;
    cin >> x >> s;
    int cnt = 0;
    for(int i=0;i<6;i++){       // upto 5 because if x.size() = 1 and s.size() = 25 (as 1 <= n.m <= 25) so it will take upto 5 operations to make the x.size() > s.size() (x.size() == 32 (2^5 operations))
        if(x.find(s) != string::npos){
            cout << i << endl;
            return;
        }
        x += x;
    }
    cout << -1 << endl;
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