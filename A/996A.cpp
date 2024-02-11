#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, count = 0;
    cin >> n;

    while (n > 0)
    {
        if (n >= 100)
        {
            count += n / 100;
            n = n % 100;
        }
        else if (n >= 20)
        {
            count += n / 20;
            n = n % 20;
        }
        else if (n >= 10)
        {
            count += n / 10;
            n = n % 10;
        }
        else if (n >= 5)
        {
            count += n / 5;
            n = n % 5;
        }
        else
        {
            count += n;
            n = 0;
        }
    }
    cout << count << endl;
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