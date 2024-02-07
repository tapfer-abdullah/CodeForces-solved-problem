#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c = 0, t;
    cin >> t;
    while (t--)
    {
        c = 0;
        cin >> a >> b;
        if (a % b == 0)
        {
            cout << c << endl;
        }
        else
        {
            int rem = a % b;
            int toBeAdd = b - rem;
            cout << toBeAdd << endl;
        }
    }

    return 0;
}