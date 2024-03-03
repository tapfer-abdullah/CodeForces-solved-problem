#include <bits/stdc++.h>
using namespace std;

int main()
{
    // freopen("../input.txt", "r", stdin);

    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int totalDrink = (k * l) / nl, totalLemon = (c * d), totalSalt = p / np;
    int minValue = min(totalDrink, min(totalLemon, totalSalt));

    int eachFriendMake = minValue / n;

    cout << eachFriendMake << endl;

    return 0;
}