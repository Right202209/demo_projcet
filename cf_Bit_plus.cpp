#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    char x[4];
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++)
    {
        gets(x);
        for (int j = 0; j < 3; j++)
        {
            if (x[j] == '+')
            {
                sum++;
                break;
            }
            if (x[j] == '-')
            {
                sum--;
                break;
            }
        }
    }
    printf("%d\n", sum);
    return 0;
}