#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        string alphabet;
        alphabet.resize(26);
        int cnt = 0;

        for (int i = 0; i < n; i++)
        {
            int idx = s[i] - 'A';
            if (s[i] == alphabet[idx])
            {
                cnt++;
            }
            else if (s[i] != alphabet[idx])
            {
                alphabet[idx] = s[i];
                cnt = cnt + 2;
            }
        }

        cout << cnt << endl;
    }

    return 0;
}