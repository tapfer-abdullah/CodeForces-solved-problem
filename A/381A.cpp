#include <bits/stdc++.h>
using namespace std;

int main()
{
    // freopen("../input.txt", "r", stdin);

    int n, s = 0, d = 0;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int i = 0, c = 1;
    while (i < n)
    {
        if (c % 2 != 0)
        {
            if (a[i] > a[n - 1])
            {
                s += a[i];
                i++;
            }
            else
            {
                s += a[n - 1];
                n--;
            }
        }
        else
        {
            if (a[i] > a[n - 1])
            {
                d += a[i];
                i++;
            }
            else
            {
                d += a[n - 1];
                n--;
            }
        }

        c++;
    }

    cout << s << " " << d << endl;

    return 0;
}