#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<int> v(n);
        bool canSort = true;
        for(auto& num : v) cin >> num;
        if(k == 1){
            vector<int> s = v;
            sort(s.begin(),s.end());
            if(s != v) canSort = false;
        }
        if(canSort) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
