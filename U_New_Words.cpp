#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int free[5] = {0};

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'e' || s[i] == 'E')
        {
            free[0]++;
        }
        if (s[i] == 'g' || s[i] == 'G')
        {
            free[1]++;
        }
        if (s[i] == 'y' || s[i] == 'Y')
        {
            free[2]++;
        }
        if (s[i] == 'p' || s[i] == 'P')
        {
            free[3]++;
        }
        if (s[i] == 't' || s[i] == 'T')
        {
            free[4]++;
        }
    }

    int mn = INT_MAX;
    for (int i = 0; i < 5; i++)
    {
        mn = min(mn, free[i]);
    }

    cout << mn << endl;

    return 0;
}