#include <stdio.h>

int main()
{
    int a,b,temp;
    printf("Enter Value Of a:");
    scanf("%d",&a);
    printf("Enter Value Of b:");
    scanf("%d",&b);
    
    if(a==b)
        printf("a and b are equal\n");
    else
    {    
    if(a>b) 
        printf("%d is largest value\n",a);
    else
        printf("%d is largest value\n",b);
    if(a<b)
        printf("%d is smallest value\n",a);
    else
        printf("%d is smallest value\n",b);
    }
}