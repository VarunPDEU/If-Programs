#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter Value Of a:");
    scanf("%d",&a);
    printf("Enter Value Of b:");
    scanf("%d",&b);
    printf("Enter Value Of c:");
    scanf("%d",&c);
    
    if(a==b==c)
        printf("a,b and c are equal\n");
    else
    {    
    if((a>b)&&(a>c)) 
        printf("%d is largest value\n",a);
    else
    if((b>a)&&(b>c))
        printf("%d is largest value\n",b);
    else
        printf("%d is largest value\n",c);
    if((a<b)&&(a<c)) 
        printf("%d is smallest value\n",a);
    else
    if((b<a)&&(b<c))
        printf("%d is smallest value\n",b);
    else
        printf("%d is smallest value\n",c);
    }
}