#include <bits/stdc++.h>
using namespace std;
 
#define ll unsigned long long
#define pb push_back
 
void solve() {
    ll N; if(!(cin>>N)) return;
    ll temp, prev;
    
    cin>>temp;
    prev = temp;
 
    ll counter = 1;
    ll max = counter;
 
    while (N--) {
        cin >> temp;
        if (temp <= prev) {
            if (counter > max)max=counter;
            counter = 1;
        }
        else {counter++; }
        prev = temp;
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