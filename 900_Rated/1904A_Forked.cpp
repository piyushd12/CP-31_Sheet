#include <bits/stdc++.h>
using namespace std;

int d[4][2] = {{1,1}, {1,-1}, {-1,1}, {-1,-1}};

void solve(){
    int a,b;
    cin >> a >> b;
    int xk, yk;
    cin >> xk >> yk;
    int xq, yq;
    cin >> xq >> yq;
    set<pair<int,int>> sk,sq;
    for(int i=0;i<4;i++){
        sk.insert({xk + d[i][0] * a, yk + d[i][1] * b});
        sk.insert({xk + d[i][0] * b, yk + d[i][1] * a});

        sq.insert({xq + d[i][0] * a, yq + d[i][1] * b});
        sq.insert({xq + d[i][0] * b, yq + d[i][1] * a});
    }
    int cnt = 0;
    for(auto p : sk) if(sq.count(p)) cnt++;
    cout << cnt << endl;
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