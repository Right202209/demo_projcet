#include<iostream>
using namespace std;
int main()
{
    string a;
    cin>>a;
    if(a[0]<='Z'&&a[0]>='A')
    {
        cout<<a;
    }
    else{
        a[0]=(char)(a[0]-32);
        cout<<a;
    }
    system("pause");
    return 0;
}