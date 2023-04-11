#include <bits/stdc++.h>
using namespace std;
int a[505], b[505], ans[505];
void fun(int x, int a[])
{
    int t = x, i = 0;
    while (t)
    {
        a[i++] = t % 10;
        t /= 10;
    }
}

void multi(int a[], int x)
{
    int up = 0;
    for (int i = 0; i < 500; i++)
    {
        int t = a[i] * x;
        a[i] = (t + up) % 10;
        up = (t + up) / 10;
    }
}

void sub(int a[], int b[])
{
    int down = 0;
    for (int i = 0; i < 500; i++)
    {
        if (a[i] - down >= b[i])
        {
            a[i] = a[i] - down - b[i];
            down = 0;
        }
        else
        {
            a[i] = a[i] - down - b[i] + 10;
            down = 1;
        }
    }

    for (int i = 500, flag = 0; i >= 0; i--)
    {
        if (a[i] != 0)
        {
            flag = 1;
            printf("%d", a[i]);
        }
        else if (a[i] == 0 && flag)
            printf("0");
    }
    printf("\n");
}

void subtraction(int a[], int b[])
{
    int flag = 0;
    for (int i = 500; i >= 0; i--)
    { // 比较a的b次方和b的a次方的大小，用大的减去小的
        if (a[i] > b[i])
        {
            flag = 1;
            break;
        }
        else if (a[i] < b[i])
        {
            flag = 2;
            break;
        }
    }
    if (flag == 1)
    {
        sub(a, b);
    }
    else if (flag == 2)
    {
        printf("-");
        sub(b, a);
    }
}

int main()
{
    int A, B;
    while (scanf("%d %d", &A, &B) != EOF)
    {
        memset(a, 0, sizeof(a));
        memset(b, 0, sizeof(b));
        fun(A, a), fun(B, b); // 存入数组
        for (int i = 1; i < B; i++)
        { // a的b次方
            multi(a, A);
        }

        for (int i = 1; i < A; i++)
        { // b的a次方
            multi(b, B);
        }

        subtraction(a, b); // a的b次方减去b的a次方
    }
    return 0;
}