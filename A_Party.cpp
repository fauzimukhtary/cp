#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve() {
    ll N; if(!(cin>>N)) return;
    map<ll, ll> emp;
    ll temp;
    ll i = 1;
    while(N--) {
        cin>>temp;
        emp[i] = temp;
        i++;
    }

    ll max = 0;

    for (auto& [k,v] : emp) {
        ll t = 1;
        ll inner = v;
        while (inner != -1) {
            t++;
            inner = emp[inner];
        }
        if (t > max) max = t;
    }

    cout << max;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}