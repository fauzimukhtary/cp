#include <bits/stdc++.h>
using namespace std;

#define fast_io() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long

void solve() {
    char temp;
    set<int> a;
    while (cin>>temp) {
        a.insert(temp);
    }
    if (a.size() %2==0) cout << "CHAT WITH HER!\n";
    else cout << "IGNORE HIM!\n";
}

int main() {
    fast_io();
    solve();
    return 0;
}