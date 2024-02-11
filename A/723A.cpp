#include <bits/stdc++.h>
using namespace std;

int max(int a, int b)
{
    return a > b ? a : b;
}
int min(int a, int b)
{
    return a < b ? a : b;
}

void solve()
{
    int a, b, c, mid;
    cin >> a >> b >> c;

    int minValue = min(a, min(b, c));
    int maxValue = max(a, max(b, c));
    mid = (minValue + maxValue) / 2;

    int distance = (mid - minValue) + (maxValue - mid);
    cout << distance << endl;
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