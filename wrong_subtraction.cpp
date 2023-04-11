#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    while (k)
    {
        if (n % 10 != 0)
        {
            n -= 1;
            k--;
        }
        else if(n%10==0)
        {
            n/=10;
            k--;
        }
    }
    cout<<n<<endl;
    system("pause");
    return 0;
}