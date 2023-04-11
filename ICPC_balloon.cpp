// #include <iostream>
// #include<algorithm>
// using namespace std;
// char q[1000];
// int mian()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, ans = 0;
//         char s[100000];
//         cin >> n;
//         cin >> s[100000];
//         for (int i = 1; i <= n; i++)
//         {
//             if (q[s[i]])
//                 ans++;
//             else
//                 ans += 2;
//         }
//         cout << ans << endl;
//     }
//     system("pause");
//     return 0;
// }
#include <iostream>
#define ll long long
using namespace std;
int main() 
{
	int n;
	cin>>n;
	while (n--) 
	{
		int chs[128] = {};
		ll cnt = 0, t;
		char ch[1000];
		cin>>t;
	    cin>>ch;
		for (int i = 0; ch[i]; i++)
		{
			if (chs[ch[i]])
			{
				cnt++;
			}
			else
			{
				cnt += 2;
			}
			chs[ch[i]] ++;
		}
		cout<<cnt<<endl;
	}
    system("pause");
	return 0;
}