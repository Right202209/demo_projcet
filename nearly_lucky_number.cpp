#include <iostream>
#include <cstring>
using namespace std;
char a[1000];
int main()
{

    cin >> a;
    int sum = 0;
    int len = strlen(a);
    for (int i = 0; i < len; i++)
    {
        if (a[i] == '4' || a[i] == '7')
            sum++;
    }
    if (sum == 4 || sum == 7)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
