#include <bits/stdc++.h>
using namespace std;

int pow(int a, int b)
{
    int result = 1;
    for (int i = 1; i <= b; i++)
    {
        result *= a;
    }
    return result;
}

void solve()
{
    int n, t, temp, count = 0, result[10];
    cin >> t;

    while (t--)
    {
        cin >> n;
        count = 0;
        int i = 0;
        while (n > 0)
        {
            int rem = (n % 10), power = pow(10, i);
            temp = rem * power;
            i++;

            if (temp > 0)
            {

                result[count] = temp;
                count++;
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