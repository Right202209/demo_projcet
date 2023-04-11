#include<iostream>
using namespace std;
const unsigned long long N=1e8;
unsigned long long a[N];
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        for(int i=2;i<=n;i++)
        {
            if(a[1]<a[i])
            {
                a[i]-=1;
                a[1]+=1;
            }
        }
        cout<<a[1]<<endl;
    }
    system("pause");
    return 0;
}