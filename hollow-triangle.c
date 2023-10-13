#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int i,j,n,m;
    printf("enter the no. of rows:");
    scanf("%d",&n);
    printf("enter the no. of columns:");
    scanf("%d",&m);
    printf("OPPOSITE HOLLOW TRIANGLE:\n")
    for ( i = n; i >=1; i--)
    { 
        for (j = i; j>=1 ; j--)
        {
         
            
         if ((i==1 || j==1) || (i==n || j==m) || i==j )
            {
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("HOLLOW TRIANGLE:\n");
     for ( i = 1; i <=n; i++)
    { 
        for (j = 1; j<=i ; j++)
        {
         
            
         if ((i==1 || j==1) || (i==n || j==m) || i==j )
            {
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}

