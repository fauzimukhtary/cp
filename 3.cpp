#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long N, M; if (!(cin >> N >> M)) return;
    map<int, int> A;
    long long temp, tempP;

    for (long long i = 0; i < N; i++)
    {
        cin >> temp;
        for (long long j = 0; j < temp; j++)
        {
            cin >> tempP;
            A[tempP]++;
        }
    }

    long long total = 0;

    for (long long j = 1; j <= M; j++)
    {
        if (A[j] == N) total++;
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

