#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
    cin >> n;
    long long i = 1;
    while(n % i == 0) i++;
    cout << i-1 << endl;
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

// REVISIT