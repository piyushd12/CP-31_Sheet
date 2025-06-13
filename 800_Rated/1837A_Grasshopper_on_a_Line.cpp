#include <bits/stdc++.h>
using namespace std;

void solve(){
    int x,k;
    cin >> x >> k;
    if(x % k != 0) {
        cout << 1 << endl << x << endl;
    }
    else{
        long long cnt = 0;
        for(int i=1;i<x;i++){
            if(i % k != 0 && (x-i) % k != 0){
                cout << 2 << endl << i << " " << x-i << endl;
                break;
            }
        }
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