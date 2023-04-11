#include <iostream>
using namespace std;
string t = "codeforces";
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        char s;
        int ans = 0;
        cin >> s;
        for (int i = 0; i <= 11; i++)
        {
            if (s == t[i])
                ans = 1;
        }
        if (ans == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    system("pause");
}