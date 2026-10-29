#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long N, L; if (!(cin >> N >> L)) return;
    vector<string> A(N);
    string temp = "";
    for (long long i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    sort(A.begin(), A.end());
    for (long long i = 0; i < N; i++)
    {
        cout << A[i];
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

