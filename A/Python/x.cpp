#include <iostream>
using namespace std;

int main()
{
    int capacity = 0;
    int oldPassenger = 0;

    int n;
    cin >> n;
    int a[n], b[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i] >> b[i];

        oldPassenger = oldPassenger - a[i] + b[i];
        if (capacity < oldPassenger)
        {
            capacity = oldPassenger;
        }
    }

    cout << capacity << endl;

    return 0;
}
