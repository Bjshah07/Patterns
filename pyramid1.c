#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    system("cls");
    int i,j,n,k;
    printf("enter the no. of rows:");
    scanf("%d",&n);    
    printf("1. repeating no. pyramid:\n");
    for ( i = 1; i <=n; i++)
    {  int num=1;
        for (j = 1; j<=n-i ; j++)
        {
         printf("    ");
        }
         for (k = 1; k<=i*2-1;k++)
         {
            printf(" %d  ",num++);
        
         }
         
        
        printf("\n");
    }
    printf("2. increasing no. pyramid:\n");
     int num=1;
    for ( i = 1; i <=n; i++)
    {
        for (j = 1; j<=n-i ; j++)
        {
         printf("   ");
        }
         for (k = 1; k<=i*2-1;k++)
         {
            printf(" %d ",num++);
        
         }
        printf("\n");
    }
    printf("3. repeating alphabet pyramid:\n");
    for ( i = 1; i <=n; i++)
    { 
        char ch='A';
        for (j = 1; j<=n-i ; j++)
        {
         printf("   ");
        }
         for (k = 1; k<=i*2-1;k++)
         {
            printf(" %c ",ch++);
        
         }
         
        
        printf("\n");
    }
    printf("4. increasing alphabet pyramid:\n");
    char ch1='A';
    for ( i = 1; i <=n; i++)
    {
        for (j = 1; j<=n-i ; j++)
        {
         printf("   ");
        }
         for (k = 1; k<=i*2-1;k++)
         {
            printf(" %c ",ch1++);
        
         }
        printf("\n");
    }
    printf("5. increasing-decreasing no. pattern:\n");
    for ( i = 1; i <=n; i++)
    {  int num=1;
        for (j = 1; j<=n-i ; j++)
        {
         printf("  ");
        }
         for (k = 1; k<=i;k++)
         {
            printf("%d ",num++);
         }
         int num1=i-1;
         for (int l =1; l <=i-1; l++)
         {
            printf("%d ",num1--);
         }
        printf("\n");
    }
    printf("6. increasing-decreasing alphabet pattern:\n");
   for (i =1; i <=n; i++)
   {
    for (j = 1; j<=n-i ; j++)
    {
        printf("  ");
    }
    for (k = 1; k <=i; k++)
    {
    char ch=(char)(k+64);                                       //TYPE CASTING
        printf("%c ",ch);
    }
     int a=i-1;
    for (int l = 1; l <=i-1; l++)
    { 
        char ch=(char)(a+64);
        printf("%c ",ch);
        a--;
    }
    printf("\n");
   }
    return 0;
}

