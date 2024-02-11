#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k, p = 0;
    cin >> n >> k;

    for (int i = 1; i <= n; i++)
    {

        if (k + (i * 5) <= 240)
        {
            p++;
            k += (5 * i);
        }
        else
        {
            break;
        }
    }
    cout << p << endl;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("./input.txt", "r", stdin);
    freopen("./output.txt", "w", stdout);
#endif

    solve();

    return 0;
}