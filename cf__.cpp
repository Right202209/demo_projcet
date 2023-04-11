// #include <iostream>
// #include <algorithm>
// using namespace std;
// string s, t = "Timur";
// int main()
// {
//     int a;
//     cin>>a;
//     while (--a)
//     {
//         int n;
//         cin >> n;
//         cin >> s;
//         sort(t.begin(), t.end());
//         sort(s.begin(), s.end());
//         puts(s == t ? "YES" : "NO");

//     }
//     system("pause");
//     return 0;
// }
// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     int t;
//     scanf("%d", &t);
//     while (t--)
//     {
//         int n;
//         scanf("%d", &n);
//         char a[15], tem;
//         scanf("%s", a);
//         if (n == 5)
//         {
//             for (int i = 0; i < 5; i++)
//             {
//                 for (int j = i + 1; j < 5; j++)
//                 {
//                     if (a[i] > a[j])
//                     {
//                         tem = a[i];
//                         a[i] = a[j];
//                         a[j] = tem;
//                     }
//                 }
//             }
//             if (a[0] == 'T' && a[1] == 'i' && a[2] == 'm' && a[3] == 'r' && a[4] == 'u')
//             {
//                 printf("YES\n");
//             }
//             else
//             {
//                 printf("NO\n");
//             }
//         }
//         else
//         {
//             printf("NO\n");
//         }
//     }
//     return 0;
// }
#include<iostream>
using namespace std;
int a[1000][1000];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,ans=0;
        string s,p;
        cin>>n;
        cin>>s>>p;
        for(int i=10,j=0;i<=n,j<=i;i++,j++)
        {
            if(s[i]==p[j])
            ans=1;
        }
        if(ans)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}