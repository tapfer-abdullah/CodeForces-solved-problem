#include <bits/stdc++.h>
using namespace std;

int main()
{
    // freopen("../input.txt", "r", stdin);

    int t;
    cin >> t;

    while (t--)
    {
        int before = 0, n;
        int a[4];

        cin >> a[0];

        for (int i = 1; i < 4; i++)
        {
            cin >> a[i];

            if (a[i] > a[0])
                before++;
        }
        cout << before << endl;
    }

    return 0;
}