#include <iostream>
using namespace std;

int main()
{
    int n, ans = 0;
    string s;
    cin >> n >> s;

    for (int i = 1; i < n; i++)
    {
        if (s[i - 1] == s[i])
        {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}