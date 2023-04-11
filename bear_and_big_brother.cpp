#include<iostream>
using namespace std;
int main(){
    int a,b,ans=0;
    cin>>a>>b;
    while(1)
    {
        a*=3;
        b*=2;
        ans++;
        if(a>b)
        break;
    }
    cout<<ans<<endl;
    system("pause");
    return 0;
}