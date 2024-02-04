#include <iostream>

using namespace std;

int main()
{

    string s;
    int uc = 0, lc = 0;
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            uc++;
        }
        else
        {
            lc++;
        }
    }

    if (uc > lc)
    {
        for (char c : s)
        {
            if (c >= 'A' && c <= 'Z')
            {
                cout << c;
            }
            else
            {
                cout << char(c - 32);
            }
        }
    }
    else
    {
        for (char c : s)
        {
            if (c >= 'A' && c <= 'Z')
            {
                cout << char(c + 32);
            }
            else
            {
                cout << c;
            }
        }
    }
    cout << endl;

    return 0;
}