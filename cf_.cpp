// #include <cstdio>
// #include <cstring>
 
// int a[10];
// int p[10];
// int n;
 
// void dfs(int x)
// {
//     if (x > n)
//     {
//         for (int i = 1; i < n; i++)
//         {
//             printf("%d ", a[i]);
//         }
 
//         printf("%d\n", a[n]);
//         return ;
//     }
 
//     for (int j = 1; j <= n; j++)
//     {
//         if (!p[j])
//         {
//             p[j] = 1;
//             a[x] = j;
//             dfs(x + 1);
//             p[j] = 0;
//         }
//     }
// }
 
// int main()
// {
//     n = 8;
//     memset(p, 0, sizeof(p));
//     dfs(1);
//     getchar();
//     return 0;
// }
#include <iostream>  
#include <algorithm>  
using namespace std;  
int main()  
{  
    int num[8]={1,2,3,4,5,6,7,8};  
    do  
    {  
        cout<<num[0]<<" "<<num[1]<<" "<<num[2]<<" "<<num[3]<<" "<<num[4]<<" "<<num[5]<<" "<<num[6]<<" "<<num[7]<<" "<<endl;  
    }while(next_permutation(num,num+8));  
    return 0;  
} 