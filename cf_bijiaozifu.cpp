#include <stdio.h>
#include <string.h>
#include<iostream>
using namespace std;
const int N=110;
int main()
{
    char a[N], b[N];
    scanf("%s %s", a, b);
    for(int i=0;i<=strlen(a);i++)
    {
        if(a[i]<='Z'&&a[i]>='A')
        {
            a[i]=(char)(a[i]+32);
        }
    }
    for(int i=0;i<=strlen(b);i++)
    {
        if(b[i]<='Z'&&b[i]>='A')
        {
            b[i]=(char)(b[i]+32);
        }
    }
    if (strcmp(a, b) > 0)
    {
        cout<<"1"<<endl;
    }
    else if (strcmp(a, b) == 0)
    {
        cout<<"0"<<endl;
    }
    else if (strcmp(a, b)< 0)
    {
        cout<<"-1"<<endl;
    }
    system("pause");
    return 0;
}
