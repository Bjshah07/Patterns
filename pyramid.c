#include<stdio.h>
#include<conio.h>
int main(){
    int i,j,n;
    printf("enter the no.:");
    scanf("%d",&n);
    for ( i = n; i >=1; i--)
    {
        for (j = n-i; j >=1; j--)
        {
            printf("   ");
        }
        for (j = 2*i-1; j>=1; j--)
        {
            printf(" \3 ");
        }
        printf("\n");
    }
    for ( i = 2; i <=n; i++)
    {
        for (j = 1; j <= n-i; j++)
        {
            printf("   ");
        }
        for (j = 1; j<=2*i-1; j++)
        {
            printf(" \3 ");
        }
        printf("\n");
    }
   return 0; 
}