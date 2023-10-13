#include<stdio.h>
#include<conio.h>
#include<stdio.h>
int main(){
    int n,i,j;
    printf("enter the no.:");
    scanf("%d",&n);
    printf("PATTERN NO. 1\n");
    for ( i = 1; i <=n; i++)
    {
        for (j = 1; j <=i ; j++)
        {
        printf("*");
    }
    printf("\n");
    }
    printf("PATTERN NO. 2\n");
    for ( i = n; i >=1; i--)
    {
        for (j = i; j >=1 ; j--)
        {
        printf("*");
    }
    printf("\n");
    }
    printf("PATTERN NO. 3\n");
    for ( i = 1; i <=n; i++)
    {
        for (j = 1; j <=n ; j++)
        {
        printf("*");
    }
    printf("\n");
    }
    printf("PATTERN NO. 4\n");
    for ( i = 1; i <=n; i++)
    {
        for (j = 1; j <=i ; j++)
        {
        printf("%d",j);
    }
    printf("\n");
    }
    printf("PATTERN NO. 5\n");
    for ( i = 1; i <=2*n; i++)
    {
        int row=i>n?2*n-i-1:i;
        for (j = 1; j <=row ; j++)
        {
        printf("*");
    }
    printf("\n");
    }
    printf("PATTERN NO. 6:\n");
    for ( i = 1; i <=n; i++)
    { 
        for (j = 1; j<=i; j++)
        {
        if ((i+j)%2!=0)
        {
            printf("0\t");
        }
        else{
            printf("1\t");
        }
        }
        printf("\n");
    }
   
    return 0;
}