#include <iostream>
using namespace std;

int main()
{
    int np, solve = 0;
    cin >> np;

    while (np--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if ((a + b + c) >= 2)
            solve++;
    }
    cout << solve << endl;
}