#include <iostream>
#include <string>
using namespace std;

int main()
{

    int y;
    cin >> y;

    while (1)
    {
        y += 1;
        string yString = to_string(y);
        char a = yString[0], b = yString[1], c = yString[2], d = yString[3];

        if (a != b && a != c && a != d && b != c && b != d && c != d)
        {
            cout << y << endl;
            return 0;
        }
    }
    return 0;
}