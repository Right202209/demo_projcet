#include <bits/stdc++.h>
using namespace std;
const int N = 1000;
int x[N], y[N];
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x[i] >> y[i];
    }
    //sort(x+1,x+1+n);
    int t = 1, score = 0, i = 1;
    while (t > 0 && i < n)
    {
        t--;
        score += x[i];
        t += y[i];
        i++;
    }
    cout << score << endl;
    system("pause");
}