#include <iostream>
using namespace std;

int main()
{
    int ans = 0, sl[26] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        int index = ((int)s[i] - 97);
        if (sl[index] == 0)
        {
            sl[index] = 1;
            ans++;
        }
    }

    if (ans % 2 == 0)
    {
        cout << "CHAT WITH HER!\n";
    }
    else
    {
        cout << "IGNORE HIM!\n";
    }

    return 0;
}