#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    system("cls");
    int i,j,n;
    printf("enter the no. of rows:");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {
        for (j = 1; j<=n; j++)
        {
            if (n/2!=0)
            {
                
                if (i==j || (i+j==n+1) || (i==1 || j==1) || (i==n || j==n))
                {
                    printf("* ");
                }
                else{
                    printf("  ");
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

