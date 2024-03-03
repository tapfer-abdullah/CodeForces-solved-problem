#include <bits/stdc++.h>
using namespace std;

int main()
{
    // freopen("../input.txt", "r", stdin);

    int n, totalSides = 0;
    cin >> n;
    string s[n];

    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (s[i] == "Tetrahedron")
        {
            totalSides += 4;
        }
        else if (s[i] == "Cube")
        {
            totalSides += 6;
        }
        else if (s[i] == "Octahedron")
        {
            totalSides += 8;
        }
        else if (s[i] == "Dodecahedron")
        {
            totalSides += 12;
        }
        else if (s[i] == "Icosahedron")
        {
            totalSides += 20;
        }
    }

    cout << totalSides << endl;

    return 0;
}