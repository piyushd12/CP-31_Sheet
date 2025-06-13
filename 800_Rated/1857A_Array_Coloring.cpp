#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    long long sum = 0;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        sum += x;
    }
    if(sum % 2 == 0) cout << "YES";
    else cout << "NO";
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