#include <bits/stdc++.h>
using namespace std;

#define fast_io() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define pb push_back

void solve() {
    char temp;
    bool danger = false;
    ll one= 0, zero = 0;
    while (cin>>temp) {
        if (temp == '1') {zero = 0; one++;}
        else {one = 0; zero++;}
        if (one > 6 || zero > 6) {danger = true; break;}
    }
    if (danger) cout << "YES";
    else cout << "NO";
}

int main() {
    fast_io();
    solve();
    return 0;
}