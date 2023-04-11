#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
string t = "Yes";
bool check(string s)
{
    for (int i = 0; i < s.size(); i++)
        if (t[i % 3] != s[i])
            return 0;
    return 1;
}
int main()
{
    string s;
    for (scanf("%*d");
         cin >> s;
         puts(check(s) || check("Ye" + s) || check("Y" + s) ? "yes" : "no"))
        ;
    return 0;
}
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
const int N = 1e5 + 10;
const int mod = 1e9 + 7;
ll a[N], b[N], c[N];
int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        string s = "YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";
        string s1;
        cin >> s1;
        if (s.find(s1) != -1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}