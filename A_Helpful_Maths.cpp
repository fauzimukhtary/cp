#include <bits/stdc++.h>
using namespace std;

#define fast_io() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define pb push_back

void solve() {
    int temp;
    vector<int> a;
    while (cin>>temp) {
        if (temp!='+') a.pb(temp);
    }
    sort(a.begin(), a.end());
    auto it = a.begin();
    while (it != a.end()-1) {
        cout << *it << '+';
        ++it;
    }
    cout << *it;    
}

int main() {
    fast_io();
    solve();
    return 0;
}