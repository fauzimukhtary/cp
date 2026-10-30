#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve() {
    ll N; if(!(cin>>N)) return;
    map<ll,ll> st;
    ll i = 1; ll temp;
    while(N--) {
        cin>>temp;
        st[i] = temp;
        i++;
    }
    
    for (auto& [k,v] : st) {
        map<ll,ll> counter;
        ll inner = k;
        counter[inner]++;
        while (counter[inner] != 2) {
            inner = st[inner];
            counter[inner]++;
        }
        cout << inner << " ";
    }

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}