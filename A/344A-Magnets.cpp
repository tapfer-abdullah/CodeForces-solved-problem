#include <iostream>
using namespace std;

int main()
{

    int n, prev = 0, current = 0, total = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> current;
        if (current != prev)
        {
            total++;
            prev = current;
        }
    }

    cout << total << endl;

    return 0;
}