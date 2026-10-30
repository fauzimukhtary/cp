#include <bits/stdc++.h>

using namespace std;
#define ll long long

void solve() {
    string t1, t2; cin>>t1>>t2;
    
    for (ll i = 0; i < size(t1); i++) {
        t1[i] = tolower(t1[i]);
    }

    for (ll i = 0; i < size(t2); i++) {
        t2[i] = tolower(t2[i]);
    }
    if (t1 < t2) cout << -1;
    else if (t1 == t2) cout << 0;
    else cout << 1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}