#include <bits/stdc++.h>
using namespace std;

int isComposite(int a)
{
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            return 1; // yes
        }
    }
    return 0; // not
}

int main()
{
    // freopen("../input.txt", "r", stdin);

    int n;
    cin >> n;

    for (int i = 4; i < n; i += 2)
    {
        int temp = n - i;
        if (isComposite(temp))
        {
            cout << i << " " << temp << endl;
            return 0;
        }
    }

    return 0;
}