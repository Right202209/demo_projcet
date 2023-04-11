#include <bits/stdc++.h>
using namespace std;
string s = "3141592653589793238462643383279";
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string t;
        int ans=0;
        cin>>t;
        for(int i=0;i<=30;i++)
        {
            if(t[i]==s[i])
            {
                ans++;
            }
            else
            break;
        }
        cout<<ans<<endl;
    }
    system("pause");
    return 0;
}