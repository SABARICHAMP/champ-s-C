#include <stdio.h>
int main(void) {
    int m,n,x,result;
    scanf("%d %d %d",&m,&n,&x);
    result=(m*n)%x;
    printf("%d",result);
    return 0;
}
