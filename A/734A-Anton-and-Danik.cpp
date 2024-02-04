#include <iostream>
using namespace std;

int main()
{

    int a = 0, d = 0, n;
    string s;
    cin >> n >> s;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
        {
            a++;
        }
        else
        {
            d++;
        }
    }

    if (a == d)
    {
        cout << "Friendship" << endl;
    }
    else if (a > d)
    {
        cout << "Anton" << endl;
    }
    else
    {
        cout << "Danik" << endl;
    }

    return 0;
}