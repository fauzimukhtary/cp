#include <bits/stdc++.h>
 
using namespace std;
 
void solve() {
    long long N;
    string temp;
    if(!(cin>>N)) return;
    while (N--) {
        cin >> temp;
        if (size(temp) > 10) {
            cout <<"\n" << temp[0] << size(temp)-2 << temp[size(temp)-1];
        } else cout << "\n" << temp;
    }
    
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
