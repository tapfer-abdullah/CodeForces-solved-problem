#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("../input.txt", "r", stdin);

    int t;
    cin >> t;

    while (t--)
    {
        int index = -1, n;
        cin >> n;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 1; i < n - 1; i++)
        {
            if ((a[i - 1] == a[i]) && (a[i] != a[i + 1]))
            {
                index = i + 1;
                break;
            }
            else if ((a[i - 1] != a[i]) && (a[i - 1] == a[i + 1]))
            {
                index = i;
                break;
            }
            else if ((a[i - 1] != a[i]) && (a[i] == a[i + 1]))
            {
                index = i - 1;
                break;
            }
        }

        cout << index + 1 << endl;
    }

    return 0;
}