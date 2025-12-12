// from TUT

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,c;
    cin >> a >> b >> c;
    long long new_a = 2 * b - c;
    if(new_a / a > 0 && new_a % a == 0) {
        cout << "YES\n";
        return;
    }
    long long new_c = 2 * b - a;
    if(new_c / c > 0 && new_c % c == 0) {
        cout << "YES\n";
        return;
    }
    long long new_b = (a + c) / 2;    
    if(new_b / b > 0 && new_b % b == 0 && (c - a) % 2 == 0) {
        cout << "YES\n";
        return;
    }
    cout << "NO\n";
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