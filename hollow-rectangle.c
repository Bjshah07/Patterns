#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int i,j,n,m;
    printf("enter the no. of rows:");
    scanf("%d",&n);
    printf("enter the no. of columns:");
    scanf("%d",&m);
    for ( i = 1; i <=n; i++)
    { 
        for (j = 1; j<=m; j++)
        {
        if ((n-m)==2 || (m-n)==2)
        {
            
         if ((i==1 || j==1) || (i==n || j==m) )
            {
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        else{
        printf("not so good for the pattern:");
        exit(0);
        }  
        }
        printf("\n");
    }
    return 0;
}

