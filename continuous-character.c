#include<stdio.h>
#include<conio.h>
int main(){
    int i,j,n;
    char c='A';
    printf("enter the no.:");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        for (j= 0; j <=i; j++)
        {
            printf("%c\t",c);
            c++;
        }
        printf("\n");
    }
    
return 0;
}