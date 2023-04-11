#include <iostream>
#include <cstring>
using namespace std;
char a[105];
int main() {
    int tot = 1;
    scanf("%s",a);
    int len = strlen(a);
    for(int i = 0;i < len;i ++) {
        if(a[i] == a[i - 1]) tot ++;
        else tot = 1;
        if(tot >= 7) {
            printf("YES");
            system("pause");
            return 0;
        }
    }
    printf("NO");
    system("pause");
    return 0;
}