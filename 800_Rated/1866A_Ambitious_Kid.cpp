#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int mini = 1e7;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        mini = min(mini, abs(x));
    }
    cout << mini;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    // int t;
    // cin >> t;
    // while (t--) {
    solve();
    // }
    return 0;
}
