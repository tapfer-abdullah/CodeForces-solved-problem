#include <bits/stdc++.h>
using namespace std;

int main()
{
    // freopen("../input.txt", "r", stdin);

    string s, rs = "";
    cin >> s;

    int l = s.length(), i;
    // cout << s.size() << " " << s.length() << " " << s;
    for (i = 0; i < l; i++)
    {
        if (s[i] == '-')
        {
            if (s[i + 1] == '-')
            {
                rs += "2";
                i++;
            }
            else if (s[i + 1] == '.')
            {
                rs += "1";
                i++;
            }
        }
        else
        {
            rs += "0";
        }
    }
    cout << rs << endl;

    return 0;
}