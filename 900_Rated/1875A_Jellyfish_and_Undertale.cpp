#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,n;
    cin >> a >> b >> n;
    long long res = b;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        res += min(a-1,x);
    }
    
    cout << res << "\n";
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