#include <stdio.h>
#include <string.h>
#include<iostream>
using namespace std;

int main()
{
    char num[105];
    scanf("%s", num);
    for (int i = 0; i < strlen(num) - 1; i += 2)
    {
        for (int j = 0; j < strlen(num) - i - 2; j += 2)
        {
            if (num[j] > num[j + 2])
            {
                char temp = num[j];
                num[j] = num[j + 2];
                num[j + 2] = temp;
            }
        }
    }
    printf("%s\n", num);
    system("pause");
    return 0;
}