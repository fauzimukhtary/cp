#include <bits/stdc++.h>

using namespace std;

void solve() {
    long long N; if (!(cin>>N)) return;
    string temp;
    long long X=0;
    while (N--) {
        cin>>temp;if (temp[1]=='+') ++X; else --X;
    }
    cout<<"\n"<<X<<"\n";
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}