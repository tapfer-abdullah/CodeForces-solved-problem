#include <bits/stdc++.h>
using namespace std;

int main()
{
    // freopen("../input.txt", "r", stdin);

    int k, r, i, t = 0;

    cin >> k >> r;

    i = 1;
    while (1)
    {
        t = k * i;
        int rem = (t % 10);
        if (rem == r || t % 10 == 0)
        {
            cout << i << endl;
            return 0;
        }
        i++;
    }

    return 0;
}