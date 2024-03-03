#include <bits/stdc++.h>
using namespace std;

int main()
{
    // freopen("../input.txt", "r", stdin);

    int n, max = -1, totalExpense = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

        if (a[i] > max)
        {
            max = a[i];
        }
    }

    if (n == 1)
    {
        printf("0\n");
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        totalExpense += (max - a[i]);
    }

    cout << totalExpense << endl;

    return 0;
}