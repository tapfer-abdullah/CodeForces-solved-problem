#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    if (a <= 2)
    {
        cout << "NO\n";
        return 0;
    }
    a % 2 == 0 ? cout << "YES\n" : cout << "NO\n";

    return 0;
}