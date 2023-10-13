#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    system("cls");
    int i,j,n,k;
    printf("enter the no. of rows:");
    scanf("%d",&n);
    int a=n;
    int b=1;
    for ( i = 1; i <=2*n+1; i++)
    {
    printf(" * ");
    }
    printf("\n");
    for ( i = 1; i <=n; i++)
    { 
        for (j = 1; j <=a; j++)
        {
            printf(" * ");
        }
        for (k = 1;  k<=b ;k++)
        {
            printf("   ");
        }
        for (j = 1; j <=a ; j++)
        {
            printf(" * ");
        }
        a--;
        b=b+2;
        printf("\n");
    }
    printf("NUMBERS \n");
    int num=1;
    int c=n;
    int d=1;
    for ( i = 1; i<=2*n+1; i++)
    {
    printf(" %d ",num++);
    }
    printf("\n");
    for ( i = 1; i <=n; i++)
    { 
       int num1=1;
        for (j = 1; j <=c; j++)
        {
            printf(" %d ",num1++);
        }
        for (k = 1;  k<=d ;k++)
        {
            printf("   ");
            num1++;
        }
        for (j = 1; j <=c ; j++)
        {
            printf(" %d ",num1++);
        }
        c--;
        d=d+2;
        printf("\n");
    }
    printf("ALPHABET\n");
    char ch='A';
    int e=n;
    int f=1;
    for ( i = 1; i <=2*n+1; i++)
    {
    printf(" %c ",ch++);
    }
    printf("\n");
    for ( i = 1; i <=n; i++)
    { 
       char ch='A';
        for (j = 1; j <=e; j++)
        {
            printf(" %c ",ch++);
        }
        for (k = 1;  k<=f ;k++)
        {
            printf("   ");
            ch++;
        }
        for (j = 1; j <=e ; j++)
        {
            printf(" %c ",ch++);
        }
        e--;
        f=f+2;
        printf("\n");
    }
    
 return 0;
}

