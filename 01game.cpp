#include <bits/stdc++.h>
using namespace std;
int cnt[2];
int main()
{
    int t, a;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> s;
        int n = s.length();
        cnt[0] = cnt[1] = 0;
        for (int i = 0; i < n; i++)
            if (s[i] == '0')
                cnt[0]++;
            else if (s[i] == '1')
                cnt[1]++;
        if (cnt[0] > cnt[1])
            a = cnt[1];
        else
            a = cnt[0];
        if (a % 2)
            cout << "DA" << endl;
        else
            cout << "NET" << endl;
    }
    system("pause");
    return 0;
}