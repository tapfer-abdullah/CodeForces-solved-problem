#include <iostream>
using namespace std;

int main()
{

    int n, t;
    string s;
    cin >> n >> t >> s;

    for (int j = 0; j < t; j++)
    {
        for (int i = 1; i < s.length(); i++)
        {
            if (s[i - 1] == 'B' && s[i] == 'G')
            {
                s[i - 1] = 'G';
                s[i] = 'B';
                i++;
            }
        }
    }

    cout << s << endl;

    return 0;
}