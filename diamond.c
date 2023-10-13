#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
    int n,i,j,k;
    printf("enter the no.:");
    scanf("%d",&n);
    printf("method no. 1:\n");
    for ( i = 1; i <= n; i++)
    {
        for (j = 1; j <=n-i ; j++)
        {
            printf(" ");
        }
        for (j= 1; j <=2*i-1; j++)
        {
            printf("*");
        }
     printf("\n")   ;
    }
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
    printf("method no. 2:\n");
    int a=n/2;                                  // FOR NO. OF SPACE
    int b=1;                                   // FOR NO. OF STAR
    int c=n/2+1;                               //FOR MIDDLE LINE 
    if (n%2!=0)
    {
    for ( i = 1; i <=n; i++)
    { 
        for (j = 1; j<=a ; j++)
        {
         printf("  ");
        }
        for (k = 1; k <=b; k++)
        {
            printf("* ");
        }
        if (i<c)
        {
         a--;
         b=b+2;   
        }
        else{
            a++;
            b=b-2;
        }
        printf("\n");
    }
    }
    else{
        
    }
    
    printf("method no. 3:\n");
    for ( i = 1; i <=n; i++)
    { 
        for (j = 1; j<=n-i ; j++)
        {
         printf("   ");
        }
         for (k = 1; k<=i*2-1;k++)
         {
            printf(" * ");
        
         }
         
        
        printf("\n");
    }
    for ( i = n-1; i >=1; i--)
    {
        for (j = n-i; j >=1 ; j--)
        {
            printf("   ");
        }
        for (k = 2*i-1; k >=1; k--)
        {
            printf(" * ");
        }
       printf("\n") ;
    }

    int d=n/2;                                  // FOR NO. OF SPACE
    int e=1;                                   // FOR NO. OF STAR
    int f=n/2+1;                               //FOR MIDDLE LINE 
    printf("repeating no. diamond:\n");
   for ( i =1; i <=n; i++)
   {int num=1;
    for (j = 1; j <=d;j++)
    {
        printf("  ");
    }
    for (k = 1; k <=e; k++)
    {
        printf("%d ",num++);
    }
    if (i<f)
    {
        d--;
        e=e+2;
    }
    else{
        d++;
        e=e-2;
     }
    printf("\n");
    
   }
   int g=n/2;                                  // FOR NO. OF SPACE
    int h=1;                                   // FOR NO. OF STAR
    int l=n/2+1;                               //FOR MIDDLE LINE 
    printf("repeating alphabet diamond:\n");
   for ( i =1; i <=n; i++)
   {char ch='A';
    for (j = 1; j <=g;j++)
    {
        printf("  ");
    }
    for (k = 1; k <=h; k++)
    {
        printf("%c ",ch++);
    }
    if (i<l)
    {
        g--;
        h=h+2;
    }
    else{
        g++;
        h=h-2;
     }
    printf("\n");
    
   }
   int m=n/2;                                  // FOR NO. OF SPACE
    int o=1;                                   // FOR NO. OF STAR
    int p=n/2+1;                               //FOR MIDDLE LINE 
    int num=1;
    printf("increasing no. diamond:\n");
   for ( i =1; i <=n; i++)
   {
    for (j = 1; j <=m;j++)
    {
        printf("  ");
    }
    for (k = 1; k <=o; k++)
    {
        printf("%d ",num++);
    }
    if (i<p)
    {
        m--;
        o=o+2;
    }
    else{
        m++;
        o=o-2;
     }
    printf("\n");
    
   }
   int q=n/2;                                  // FOR NO. OF SPACE
    int r=1;                                   // FOR NO. OF STAR
    int s=n/2+1;                               //FOR MIDDLE LINE 
   char ch='A';
    printf("increasing alphabt diamond:\n");
   for ( i =1; i <=n; i++)
   {
    for (j = 1; j <=q;j++)
    {
        printf("  ");
    }
    for (k = 1; k <=r; k++)
    {
        printf("%c ",ch++);
    }
    if (i<s)
    {
        q--;
        r=r+2;
    }
    else{
        q++;
        r=r-2;
     }
    printf("\n");
   }
    return 0;

    }
