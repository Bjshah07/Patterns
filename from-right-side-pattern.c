#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    system("cls");
    int i,j,n,k;
    printf("enter the no. of rows:");
    scanf("%d",&n);
    printf("1. TRIANGLE:\n");
    for ( i = 1; i <=n; i++)
    { 
        for (j = 1; j<=n-i ; j++)
        {
         printf("  ");
        }
         for (k = 1; k<=i;k++)
         {
            printf("* ");
         }
         
        
        printf("\n");
    }
    printf("2. RHOMBUS:\n");
    for ( i = 1; i <=n; i++)
    { 
        for (j = 1; j<=n-i ; j++)
        {
         printf("  ");
        }
         for (k = 1; k<=n;k++)
         {
            printf("* ");
         }
         
        
        printf("\n");
    }
    printf("3. INCREASING NUM:\n");
    int num=1;
    for ( i = 1; i <=n; i++)
    {
        for (j = 1; j <=n-i; j++)
        {
            printf(" ");
        }
        for (k = 1; k <=i; k++)
        {
            printf("%d",num++);
        }
        printf("\n");
    }
    printf("4. ICREASING ALPHABET:\n ");
    char ch='A';
    for ( i = 0; i <n; i++)
    {
        for (j = 0; j <n-i; j++)
        {
            printf(" ");
        }
        for (k= 0; k < i; k++)
        {
            printf("%c",ch++);
        }
        
       printf("\n") ;
    }
    printf("5. INCEASING ALPHA-NUM:\n");
    for ( i = 0; i <n; i++)
    {
    int num1=1;
    char ch1='a';
        for (j = 0; j<n-i; j++)
        {
            printf(" ");
        }
        for ( k = 0; k < i;k++)
        {
            if (i%2==0)
            {
                printf("%d",num1++);
            }
            else{
                printf("%c",ch1++);
            }
        }
     printf("\n")   ;
    }
     return 0;
}

