#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, unique = 0;
    string s;
    cin >> n;
    cin >> s;

    if (n < 26)
    {
        cout << "NO\n";
        return;
    }

    transform(s.begin(), s.end(), s.begin(), ::tolower);
    sort(s.begin(), s.end());

    for (int i = 0; i < n; i++)
    {
        if (s[i] != s[i + 1])
        {
            unique++;
        }
    }

    if (unique == 26)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
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

// Technique 2
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, unique = 0;
    string s;
    cin >> n;
    cin >> s;

    if (n < 26)
    {
        cout << "NO\n";
        return;
    }

    transform(s.begin(), s.end(), s.begin(), ::tolower);
    set<char> ss;

    for (int i = 0; i < n; i++)
    {
        ss.insert(s[i]);
    }

    if (ss.size() == 26)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
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