// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n,ans1=0,ans0=0;
//         string s;
//         cin>>n;
//         cin>>s;
//         for(int i=0;i<n;i++)
//         {
//             if(s[i]==1)
//             ans1++;
//             else
//             ans0++;
//         }
//         if(ans1%2==0)
//         {

//         }
//     }
// }
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e6 + 5, INF = 0x3f3f3f3f; 
int n;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		cin >> n;
		string s;
		cin >> s;
		int flag = 0;
		int l = s.size();
		if (s[0] == '1')
		{
			flag++;
		}
		for (int i = 1;i < l;i++)
		{
			if (s[i] == '1')
			{
				flag++;
				if (flag % 2 == 0)
				{
					cout << '-';
				}
				else 
				{
					cout << '+';
				}
				
			}else
				{
					cout << "-";
				}
		}
			cout << endl;
	}
    system("pause");
    return 0;
}