#include<stdio.h>
#include<conio.h>
int main(){
    int i,j,n;
    printf("enter the no.:");
    scanf("%d",&n);
   for ( i = 1; i <= n-1; i++)
    {
        for (j = 1; j <=i; j++)
        {
            printf(" ");
        }
        for (j= 1; j <=2*(n-i)-1; j++)
        {
            printf("*");
        }
     printf("\n")   ;
    }
    return 0;
}