#include <bits/stdc++.h>
using namespace std;

int main()
{
    // freopen("../input.txt", "r", stdin);

    int n, m, direction = 1;
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            for (int j = 0; j < m; j++)
            {
                cout << "#";
            }
            cout << "\n";
        }
        else
        {
            if (direction == 1)
            {
                for (int j = 0; j < m - 1; j++)
                {
                    cout << ".";
                }
                cout << "#\n";
                direction = -1;
            }
            else
            {
                cout << "#";
                for (int j = 0; j < m - 1; j++)
                {
                    cout << ".";
                }
                cout << "\n";
                direction = 1;
            }
        }
    }

    return 0;
}