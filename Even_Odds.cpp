#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n, k, r;
    cin >> n >> k;
    if (n % 2)
        n++;
    n /= 2;
    if (n >= k)
        r = 2 * k - 1;
    else
        r = 2 * (k - n);
    cout << r << endl;
    system("pause");
    return 0;
}