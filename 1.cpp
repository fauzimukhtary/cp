#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long N, K; cin >> N >> K;
    vector<long long> A(N);

    for (long long i = 0; i < N; i++ )
    {
        cin >> A[i];
    }

    long long thres = A[K-1];
    long long total = 0;
    for (long long i = 0; i < N; i++)
    {
        if (A[i]>=thres && A[i] > 0) total++;
        else break;
    }

    cout << total;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

