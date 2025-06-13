#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,c;
    cin >> a >> b >> c;
    int anna = a;
    int katie = b;
    if(c % 2 != 0) anna++;
    if(anna > katie) cout << "First\n";
    else cout << "Second\n";
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