#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int i,j,n;
    printf("enter the no.:");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    { 
        for (j = 1; j<=n; j++)
        {
            if (n%2!=0)
            {
                 if (j==n/2+1  || i==n/2+1)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
            }
            else{
                printf("not good for the pattern:");
                exit(0);
            }
        }
        printf("\n");
    }
    return 0;
    
}

