#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n;
        cin >> s;
        for (int i = 1; i < n; i++)
        {
            if (s[i] == '?')
            {
                if (s[i - 1] == 'R')
                    s[i] = 'B';
                if (s[i - 1] == 'B')
                    s[i] = 'R';
            }
        }
        for (int i = n - 2; i >= 0; i--)
        {
            if (s[i] == '?')
            {
                if (s[i + 1] == 'R')
                    s[i] = 'B';
                if (s[i + 1] == 'B')
                    s[i] = 'R';
            }
        }
        if (s[0] == '?')
        {
            for (int i = 0; i < n; i++)
            {
                if (i % 2 == 0)
                    cout << "B";
                else
                    cout << "R";
            }
            cout << endl;
            continue;
        }
        cout << s << endl;
    }
    system("pause");
    return 0;
}