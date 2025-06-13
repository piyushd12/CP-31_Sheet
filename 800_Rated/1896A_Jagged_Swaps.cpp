#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> vec(n);
    for(auto& v : vec) cin >> v;
    // vector<int> comp = vec; // My Naive solution
    // sort(comp.begin(),comp.end());
    // while(vec != comp){
    //     bool swapped = false;
    //     for(int i=1;i<n-1;i++){
    //         if(vec[i] > vec[i-1] && vec[i] > vec[i+1]){
    //             swap(vec[i],vec[i+1]);
    //             swapped = true;
    //         }
    //     }
    //     if(!swapped) break;
    // }
    
    // if(vec == comp) cout << "YES";
    // else cout << "NO";

    if(vec[0] == 1) cout << "YES"; // CP-31 solution
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