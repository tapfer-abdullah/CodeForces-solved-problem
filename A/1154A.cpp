#include <bits/stdc++.h>
using namespace std;

int main()
{
    // freopen("../input.txt", "r", stdin);

    int a, b, c, max, arr[4];

    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + 4);

    max = arr[3];
    a = max - arr[0];
    b = max - arr[1];
    c = max - arr[2];

    cout << a << " " << b << " " << c << endl;

    return 0;
}