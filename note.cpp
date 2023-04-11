#include<bits/stdc++.h>
using namespace std;
int n,m,flag;
string s;
int main(){
    cin>>n;
    while(n--){
        cin>>m;
        cin>>s;
        flag=0;
        if(m<4){  //m小于4时，不存在操作数可以小于m的字符串 ，此时直接输出NO; 
            cout<<"NO"<<endl;
            continue;
        }
        for(int i=0;i<m;i++){  //循环找出可以重复的两个字符;
            for(int j=i+2;j<m;j++){
                if(s[i]==s[j]&&j+1<m&&s[i+1]==s[j+1]){
                    cout<<"YES"<<endl; //找到; 
                    flag=1;    
                    break;
                }
            }if(flag==1) break; //若找到，跳出当前循环; 
        }
        if(flag!=1) cout<<"NO"<<endl;//找不到，输出NO; 
    }    
}