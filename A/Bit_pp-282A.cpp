#include <iostream>
using namespace std;

int main()
{
    int n, ans = 0;
    cin >> n;

    while (n--)
    {
        string s;
        cin >> s;
        if ((s[0] == '+') || (s[0] == 'X' && s[1] == '+'))
            ans++;
        else
            ans--;
    }
    cout << ans << endl;
}