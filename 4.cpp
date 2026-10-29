#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int N; if(!(cin >> N)) return;
    char temp;
    set<char> S;
    for (int i = 0; i < N; i++) {
        cin >> temp;
        temp = (tolower(temp));
        S.insert(temp);
    }
    if (S.size() == 26) cout << "YES";
    else cout << "NO";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

