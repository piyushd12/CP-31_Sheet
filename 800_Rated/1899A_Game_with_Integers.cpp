#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    // if((n - 1) % 3 == 0 || (n + 1) % 3 == 0) cout << "First";
    if(n % 3 == 0) cout << "Second";
    else cout << "First";
    cout << endl;
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