#include <bits/stdc++.h>
using namespace std;

int main()
{
    // freopen("../input.txt", "r", stdin);

    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        if (n == 1)
        {
            cout << "YES\n";
            continue;
        }

        sort(a, a + n);

        for (int i = 1; i < n; i++)
        {
            if (a[i] - a[i - 1] > 1)
            {
                count++;
                break;
            }
        }

        if (count == 0)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}