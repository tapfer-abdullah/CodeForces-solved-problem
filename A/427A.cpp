#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, recruit = 0, untreated = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;

        if (t == -1) // crime
        {
            if (recruit >= 1)
            {
                recruit--;
            }
            else
            {
                untreated++;
            }
        }
        else
        {
            recruit += t;
        }
    }
    cout << untreated << endl;
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