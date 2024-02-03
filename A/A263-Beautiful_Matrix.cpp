#include <iostream>
using namespace std;

int main()
{
    int a[5][5], t, oldR, oldC, ans = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> t;
            if (t == 1)
            {
                oldR = i;
                oldC = j;
            }
        }
    }

    if (oldR >= 2)
    {
        ans += (oldR - 2);
    }
    else
    {
        ans += (2 - oldR);
    }

    if (oldC >= 2)
    {
        ans += (oldC - 2);
    }
    else
    {
        ans += (2 - oldC);
    }

    cout << ans << endl;
    return 0;
}