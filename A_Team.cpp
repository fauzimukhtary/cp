#include <bits/stdc++.h>

using namespace std;

void solve() {
    long long N; if (!(cin>>N)) return;
    long long M=0; int temp; long long O=0;
    while (N--) {
        long long i=3;
        M=0;
        while (i--) {
            cin>>temp;
            if (temp==1) M++;
        }
        if (M>1) O++;
    }
    cout << "\n"<< O;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}