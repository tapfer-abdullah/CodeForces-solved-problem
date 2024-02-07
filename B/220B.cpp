#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    double a[n], totalOrange = 0.0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        totalOrange += a[i] / 100.00;
    }

    cout << fixed << setprecision(12) << (totalOrange / n) * 100 << endl;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    solve();

    return 0;
}