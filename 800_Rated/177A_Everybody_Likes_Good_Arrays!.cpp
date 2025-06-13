#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int prev;
    cin >> prev;
    int res = 0;
    int curr = 1;
    int prevParity = prev % 2;
    for (int i = 1; i < n; i++)
    {
        int x;
        cin >> x;
        if(x % 2 == prevParity){
            curr++;
            if(curr >= 2) res++;
        } 
        else {
            curr = 1;
            prevParity = x % 2;
        }
    }
    cout << res << endl;
    
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