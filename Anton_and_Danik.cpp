#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    int n,ansA=0,ansD=0;
    cin >> n;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
            ansA++;
        else
            ansD++;
    }
    if (ansA > ansD)
        cout << "Anton" << endl;
    else if (ansA < ansD)
        cout << "Danik" << endl;
    else
        cout << "Friendship" << endl;
    system("pause");
    return 0;
}
