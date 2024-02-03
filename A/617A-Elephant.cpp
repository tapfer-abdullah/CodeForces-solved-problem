#include <iostream>
using namespace std;

int main()
{
    long long int a, ans = 0, count = 0;

    cin >> a;

    while (1)
    {
        if (ans >= a)
        {
            cout << count << endl;
            return 0;
        }
        else
        {
            ans += 5;
            count++;
        }
    }

    return 0;
}