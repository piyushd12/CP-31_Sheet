#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int sum = 0;
    int negs = 0;
    int ops = 0;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        sum += x;
        if(x == -1) negs++;
    }

    if(sum < 0){
        // ops += (abs(sum / 2) + abs(sum % 2));
        ops += (-sum + 1) / 2;
        negs -= ops;
    }
    // while (sum < 0){
    //     sum += 2;
    //     ops++;
    //     negs--;
    // }
    if(negs % 2 == 1) ops++;
    cout << ops << endl;
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