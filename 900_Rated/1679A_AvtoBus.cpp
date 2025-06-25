#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
    cin >> n;
    if(n & 1 || n < 4){
        cout << -1 << endl;
        return;
    }
    // long long mini = n / 6;
    // if(n % 6 > 0) mini++; 
    // if rem > 0, then we can add one more bus so that all tyres will be used. (either add one 4 (rem = 4) or cancel one 6 and add two 4s (rem = 2))
    // long long maxi = n / 4;

    long long mini = ceil(1.0 * n / 6);
    long long maxi = n / 4;

    cout << mini << " " << maxi << endl;        
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