#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int i,j,n,k;
    char ch='A';
    printf("enter the  no.:");
    scanf("%d",&n);
    printf("1. repeating alphabet square:\n");
    for ( i = 1; i <=n; i++)
    {
        ch='A';
        for ( j = 1; j<=n; j++)
        {
            printf("%c\t",ch);
            ch++;
        }
        printf("\n");
    }
    printf("2. increasing alphabet square:\n");
    char ch1='A';
    for ( i = 1; i <=n; i++)
    {
        for ( j = 1; j<=n; j++)
        {
            printf("%c\t",ch1);
            ch1++;
        }
        printf("\n");
    }
    printf("3. repeating alphabet triangle:\n");
    for ( i = 1; i <=n; i++)
    {
      char ch2='A';
        for ( j = 1; j<=i; j++)
        {
            printf("%c\t",ch2);
            ch2++;
        }
        printf("\n");
    }
    printf("4. increasing alphabet triangle:\n");
    char ch3='A';
    for ( i = 1; i <=n; i++)
    {
        for ( j = 1; j<=i; j++)
        {
            printf("%c\t",ch3);
            ch3++;
        }
        printf("\n");
    }
    printf("5. repeating alphabet opposite triangle:\n");
    for ( i = 1; i <=n; i++)
    {
      char ch4='A';
        for ( j = 1; j<=n+1-i; j++)
        {
            printf("%c\t",ch4);
            ch4++;
        }
        printf("\n");
    }
    printf("6. increasing alphabet opposite triangle:\n");
    char ch5='A';
    for ( i = 1; i <=n; i++)
    {
        for ( j = 1; j<=n+1-i; j++)
        {
            printf("%c\t",ch5);
            ch5++;
        }
        printf("\n");
    }
    printf("7. odd repeating alphabet triangle:\n");
    for ( i = 1; i <=n; i++)
    {
      char ch6='A';
        for ( j = 1; j<=i; j++)
        {
            printf("%c\t",ch6);
            ch6=ch6+2;
        }
        printf("\n");
    }
    printf("8. odd increasing alphabet triangle:\n");
    char ch7='A';
    for ( i = 1; i <=n; i++)
    {
        for ( j = 1; j<=i; j++)
        {
            printf("%c\t",ch7);
            ch7=ch7+2;
        }
        printf("\n");
    }
     printf("9. repeating alphabet pyramid:\n");
    for ( i = 1; i <=n; i++)
    { 
        char ch8='A';
        for (j = 1; j<=n-i ; j++)
        {
         printf("   ");
        }
         for (k = 1; k<=i*2-1;k++)
         {
            printf(" %c ",ch8++);
        
         }
         
        
        printf("\n");
    }
    printf("10. increasing alphabet pyramid:\n");
    char ch9='A';
    for ( i = 1; i <=n; i++)
    {
        for (j = 1; j<=n-i ; j++)
        {
         printf("   ");
        }
         for (k = 1; k<=i*2-1;k++)
         {
            printf(" %c ",ch9++);
        
         }
        printf("\n");
    }
    return 0;
}