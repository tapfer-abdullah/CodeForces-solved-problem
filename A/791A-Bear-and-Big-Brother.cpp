#include <iostream>
using namespace std;

int main()
{
    int a, b, ans = 0;

    cin >> a >> b;

    while (1)
    {
        if (a > b)
        {
            cout << ans << endl;
            return 0;
        }
        else
        {
            a *= 3;
            b *= 2;
            ans++;
        }
    }

    return 0;
}