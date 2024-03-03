#include <bits/stdc++.h>
using namespace std;

int main()
{
    // freopen("../input.txt", "r", stdin);

    int a, b, diff = 0, same = 0, total = 0;
    cin >> a >> b;

    total = (a + b) / 2;
    int small = a < b ? a : b;

    diff = small;
    same = total - diff;

    cout << diff << " " << same << endl;

    return 0;
}