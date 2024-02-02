#include <iostream>
using namespace std;

int main()
{
    int np, position, advance = 0;
    cin >> np >> position;
    int a[np];

    for (int i = 0; i < np; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < np; i++)
    {
        if (a[i] >= a[position - 1] && a[i] > 0)
        {
            advance++;
        }
    }

    cout << advance << endl;
}