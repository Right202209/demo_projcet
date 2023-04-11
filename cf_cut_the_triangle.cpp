#include<iostream>
using namespace std;
int main()
{
    int t;
    int x1,x2,x3,y1,y2,y3;
    cin>>t;
    while(t--)
    {
        cin>>x1>>y1;
        cin>>x2>>y2;
        cin>>x3>>y3;
        if(y1==y2&&x2==x3||x1==x3&&y1==y2||y1==y3&&x1==x2||y1==y3&&x3==x2||y3==y2&&x1==x2||y3==y2&&x1==x3)
        {
            cout<<"NO"<<endl;
        }
        else
        cout<<"YES"<<endl;
    }
    system("pause");
    return 0;
}