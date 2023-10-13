#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int i,j,n,num=1;
    char ch='A';
    printf("enter the no.:");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    { 
        num=1;
        ch='A';
        for (j = 1; j<=i; j++)
        {
            if (i%2!=0)
            {
                printf("%d\t",num++);
                
            }
            else{
                printf("%c\t",ch++);
            }
        }
        printf("\n");
    }
    return 0;
    
}
