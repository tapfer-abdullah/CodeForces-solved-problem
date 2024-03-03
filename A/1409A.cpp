#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("../input.txt", "r", stdin);

    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b, count = 0;
        cin >> a >> b;

        if (a > b)
        {
            n = a - b;

            if (n % 10 == 0)
            {
                count = n / 10;
            }
            else
            {
                count = (n / 10) + 1;
            }
        }
        else
        {
            n = b - a;

            if (n % 10 == 0)
            {
                count = n / 10;
            }
            else
            {
                count = (n / 10) + 1;
            }
        }

        cout << count << "\n";
    }

    return 0;
}