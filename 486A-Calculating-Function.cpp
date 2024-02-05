#include <iostream>
using namespace std;

int main()
{

    long long int n, odd = 0, even = 0, total = 0;

    cin >> n;

    if (n % 2 == 0)
    {
        odd = even = n / 2;
    }
    else
    {
        even = n / 2;
        odd = n - even;
    }

    total = (even * even) + even - (odd * odd);

    cout << total << endl;

    return 0;
}