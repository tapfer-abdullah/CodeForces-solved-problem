#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, swap = 0, minPos = -1, maxPos = -1, min = 101, max = -1;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int h;
        cin >> h;

        if (h <= min)
        {
            min = h;
            minPos = i;
        }
        if (h > max)
        {
            max = h;
            maxPos = i;
        }
    }

    if (minPos < maxPos)
    { //-1 will be added
        swap = (maxPos - 1) + (n - minPos) - 1;
    }
    else
    {
        swap = (maxPos - 1) + (n - minPos);
    }
    cout << swap << endl;
}

int main()
{

    //     ios_base::sync_with_stdio(false);
    //     cin.tie(NULL);

    // #ifndef ONLINE_JUDGE
    //     freopen("../input.txt", "r", stdin);
    //     freopen("../output.txt", "w", stdout);
    // #endif

    solve();

    return 0;
}