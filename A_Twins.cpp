#include <bits/stdc++.h>
using namespace std;

#define fast_io() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define pb push_back

void solve() {
    ll N; if(!(cin>>N)) return;
    vector<ll> A;
    ll temp;
    while (N--) {
        cin>>temp;
        A.pb(temp);
    }
    ll totalE = 0;

    for (auto &it : A) {
        totalE += it;
    }

    sort(A.begin(), A.end(), greater<int>());

    ll moves = 0;
    ll totalA = 0;
    auto it = A.begin();

    while (it != A.end()) {
        ++moves;
        totalE -= *it;
        totalA += *it;
        if (totalA > totalE) break;
        it++;
    }
    cout << moves;
}

int main() {
    fast_io();
    solve();
    return 0;
}