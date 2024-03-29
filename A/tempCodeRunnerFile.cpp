#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, t, count = 0, result[10];
    cin >> t;

    while (t--)
    {
        cin >> n;
        count = 0;
        int i = 0;
        while (n > 0)
        {
            int rem = n % 10;
            int temp = rem * pow(10, i);
            i++;

            if (temp > 0)
            {
                result[count++] = temp;
            }
            n /= 10;
        }
        cout << count << endl;
        for (int j = 0; j < count; j++)
        {
            cout << result[j] << " ";
        }
        cout << endl;
    }
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