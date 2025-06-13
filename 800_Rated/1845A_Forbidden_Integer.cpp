#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n,k,x;
    cin >> n >> k >> x;
    if(x != 1){
        cout << "YES\n" << n << endl;
        for(int i=0;i<n;i++) cout << 1 << " ";
        cout << endl;
        return;
    }
    if(k > 1){
        if(n % 2 == 0){
            cout << "YES\n" << n/2 << endl;
            for(int i=0;i<n/2;i++) cout << 2 << " ";
            cout << endl;
            return;
        }
        else{
            if(k == 2){
                cout << "NO\n";
                return;
            }
            if(k > 2){
                cout << "YES\n" << n / 2 << endl;
                for(int i=0;i<n/2;i++){
                    if(i == 0) cout << 3 << " ";
                    else cout << 2 << " ";
                }
                cout << endl;
                return;
            }
        }
    }
    else cout << "NO\n";
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