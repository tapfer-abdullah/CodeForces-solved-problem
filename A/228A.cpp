#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[4], diff = 1;
    cin >> a[0] >> a[1] >> a[2] >> a[3];

    sort(a, a + 4);

    for (int j = 0; j < 4 - 1; j++)
    {
        if (a[j] != a[j + 1])
        {
            diff++;
        }
    }
    cout << 4 - diff << endl;

    return 0;
}