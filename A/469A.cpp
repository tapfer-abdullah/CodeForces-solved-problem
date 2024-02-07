#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, p, q, a[300], unique = 0;
    cin >> n;

    cin >> p;
    for (int i = 0; i < p; i++)
    {
        cin >> a[i];
    }

    cin >> q;
    for (int i = p; i < p + q; i++)
    {
        cin >> a[i];
    }

    sort(a, a + (p + q));

    for (int j = 0; j < p + q; j++)
    {
        if (a[j] != a[j + 1])
        {
            unique++;
        }
    }

    if (unique == n)
    {
        cout << "I become the guy.\n";
    }
    else
    {
        cout << "Oh, my keyboard!\n";
    }
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    solve();

    return 0;
}