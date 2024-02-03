#include <iostream>
using namespace std;

int main()
{
    long long int k, n, w;

    cin >> k >> n >> w;

    long long int total = k * (w * (w + 1) / 2);

    if (total <= n)
    {
        cout << "0\n";
    }
    else
    {
        cout << (total - n) << endl;
    }

    return 0;
}