#include<stdio.h>
int main(){
    int i,j,nu=1,n;
    printf("enter the no.:");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d\t",nu++);
        }
        printf("\n");
    }
    return 0;
}