#include <iostream>
using namespace std;

int main()
{

    int n, i, j, total = 0;

    cin >> n;

    for (int x = 0; x < n; x++)
    {
        cin >> i >> j;
        if ((j - i) >= 2)
            total++;
    }

    cout << total << endl;

    return 0;
}