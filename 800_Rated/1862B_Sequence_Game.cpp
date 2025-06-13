#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> b(n);
    for(int& num : b) cin >> num;
    vector<int> a;
    a.push_back(b[0]);
    for(int i=1;i<n;i++){
        if(b[i] >= b[i-1]) a.push_back(b[i]);
        else{
            a.push_back(b[i]);
            a.push_back(b[i]);
        }
    }
    cout << a.size() << endl;
    for(int i : a){
        cout << i << " "; 
    }
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