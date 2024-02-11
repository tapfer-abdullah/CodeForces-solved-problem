#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, temp, min, max, amazing = 0;
    cin >> n;
    cin >> temp;
    min = max = temp;

    for (int i = 1; i < n; i++)
    {
        cin >> temp;

        if (temp > max)
        {
            max = temp;
            amazing++;
        }
        else if (temp < min)
        {
            min = temp;
            amazing++;
        }
    }

    cout << amazing << endl;
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