// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main()
// {
//     int len,ans=0;
//     string a,b;
//     cin>>a;
//     len=a.length();
//     for(int i=1;i<=len;i++)
// {
//     if(a[i]<=1)
//     b[a[i]]++;
//     if(b[a[i]]==1)
//     ans++;
// }
// if(ans%2==0)
// cout<<"CHAT WITH HER!"<<endl;
// else
// cout<<"IGNORE HIM!"<<endl;
// system("pause");
// return 0;
// }
#include <iostream>
#include <algorithm>
using namespace std; 
bool vis[26];
int ans;
 
int pd(char s) {
	int cnt = s - 97;
	int flag;
	if (vis[cnt] == true) {
		flag = 0;
	}
	else {
		flag = 1;
		vis[cnt] = true;
	}
	return flag;
}
 
int main() {
	string s;
	cin >> s;
	int len = s.length();
	for (int i = 0;i < len;++i) {
		if (pd(s[i])) {
			ans++;
		}
	}
	if (ans % 2 == 0) {
		cout << "CHAT WITH HER!" << endl;
	}
	else {
		cout << "IGNORE HIM!" << endl;
	}
    system("pause");
	return 0;
}