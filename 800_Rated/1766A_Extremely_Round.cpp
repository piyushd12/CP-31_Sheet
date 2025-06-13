#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    long long cnt = 0;
    long long i = 1;
    while(i <= n && i <= 9){
        cnt++;
        i++;
    }
    while(i <= n && i < 99){
        cnt++;
        i += 10;
    }
    while(i <= n && i < 999){
        cnt++;
        i += 100;
    }
    while(i <= n && i < 9999){
        cnt++;
        i += 1000;
    }
    while(i <= n && i < 99999){
        cnt++;
        i += 10000;
    }
    while(i <= n && i < 999999){
        cnt++;
        i += 100000;
    }
    cout << cnt << endl;
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