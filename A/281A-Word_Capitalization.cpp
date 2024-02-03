#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    if (s[0] >= 'A' && s[0] <= 'Z')
    {
        cout << s[0];
    }
    else
    {
        int t = ((int)s[0] - 32);
        cout << (char(t));
    }

    for (int i = 1; i < s.length(); i++)
    {
        cout << s[i];
    }
    cout << "\n";

    return 0;
}