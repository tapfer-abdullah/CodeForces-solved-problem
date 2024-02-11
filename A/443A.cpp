#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int count = 0;
    string s;
    getline(cin, s);

    set<char> ss;
    for (int i = 1; i < s.length(); i += 3)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            ss.insert(s[i]);
        }
    }
    cout << ss.size() << endl;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    solve();

    return 0;
}