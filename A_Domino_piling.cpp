#include <bits/stdc++.h>

using namespace std;

void solve() {
    long long M, N; if (!(cin>>M>>N)) return;
    long long total = 0;
    if (M<2&&N<2) {cout << "\n" << 0<<"\n"; return;}
    total+=(N/2)*M+((N%2)*(M/2));
    cout<<"\n"<<total<<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}