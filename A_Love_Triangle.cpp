#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve() {
    ll N; if(!(cin>>N)) return;
    ll temp;
    map<ll, ll> A;

    ll i = 1;
    
    while(N--) {
        cin>> temp;
        A[i] = temp;
        i++;
    }
    
    bool tri = false;

    for (auto &[k, v] : A) {
        if (k==A[A[v]]) {tri=true; break;}
    }

    if (tri) cout << "YES"; else cout << "NO";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}