#include <iostream>
using namespace std;

int main()
{

    string s, t;
    cin >> s >> t;
    int len = s.length();

    for (int i = 0; i < len; i++)
    {
        if (s[i] != t[len - 1 - i])
        {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;

    return 0;
}