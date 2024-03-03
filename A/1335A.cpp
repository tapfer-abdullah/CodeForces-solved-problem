#include <bits/stdc++.h>
using namespace std;

int main()
{
    // freopen("../input.txt", "r", stdin);

    int t;
    cin >> t;

    while (t--)
    {
        int n, ways = 0;
        cin >> n;

        if (n < 3)
        {
            cout << "0\n";
        }
        else
        {
            if (n % 2 == 0)
            {
                ways = (n / 2) - 1;
            }
            else
            {
                ways = n / 2;
            }
            cout << ways << endl;
        }
    }

    return 0;
}