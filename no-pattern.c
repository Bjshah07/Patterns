#include<stdio.h>
#include<stdlib.h>
int main(){
    system("cls");
    int n,i,j,num=1,k;
    printf("enter the no.:");
    scanf("%d",&n);
    printf("1. solid square repeating pattern:\n");
    for ( i = 1; i <=n; i++)
    {
        for (j = 1; j<=n ; j++)
        {
            printf("%d\t",num++);
            
        }
       printf("\n") ;
       num=1;
    }
    printf("2. solid square increasing pattern:\n");
    for ( i = 1; i <=n; i++)
    {
        for (j = 1; j<=n ; j++)
        {
            printf("%d\t",num++);
            
        }
       printf("\n") ;
    }
    int num1=1;
    printf("3. solid triangular increasing pattern:\n");
     for ( i = 1; i <=n; i++)
    {
        for (j = 1; j<=i ; j++)
        {
            printf("%d\t",num1++);
            
        }
       printf("\n");
    }
    int num2=1;
    printf("4. solid opposite triangular increasing pattern:\n");
     for ( i = 1; i <=n; i++)
    {
        for (j = 1; j<=n+1-i ; j++)
        {
            printf("%d\t",num2++);
        }
       printf("\n");
    }
    printf("5. solid triangular repeating pattern:\n");
     for ( i = 1; i <=n; i++)
    {
        for (j = 1; j<=i ; j++)
        {
            printf("%d\t",j);
            
        }
       printf("\n") ;
    }
    printf("6. solid opposite triangular repeating pattern:\n");
     for ( i = 1; i <=n; i++)
    {
        for (j = 1; j<=n+1-i ; j++)
        {
            printf("%d\t",j);
            
        }
       printf("\n") ;
    }
    printf("7. ODD NO. repeating triangle:\n");
    for ( i = 1; i <=n ; i++)
    {
        for (j=1; j<=i; j++)
        {
            printf("%d\t",j*2-1);
        }
        printf("\n");
    }
    printf("8. odd no. increasing triangle:\n");
    int num3=1;
    for ( i = 1; i <=n ; i++)
    {
        for (j=1; j<=i; j++)
        {
            printf("%d\t",num3);
            num3=num3+2;
        }
        printf("\n");
    
    }
    printf("9. binary triangle:\n");
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
    printf("10. repeating no. pyramid:\n");
    for ( i = 1; i <=n; i++)
    {  int num4=1;
        for (j = 1; j<=n-i ; j++)
        {
         printf("    ");
        }
         for (k = 1; k<=i*2-1;k++)
         {
            printf(" %d  ",num4++);
        
         }
         
        
        printf("\n");
    }
    printf("11. increasing no. pyramid:\n");
     int num5=1;
    for ( i = 1; i <=n; i++)
    {
        for (j = 1; j<=n-i ; j++)
        {
         printf("   ");
        }
         for (k = 1; k<=i*2-1;k++)
         {
            printf(" %d ",num5++);
        
         }
        printf("\n");
    }
    printf("5. increasing-decreasing pyramid:\n");
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
    return 0;
}