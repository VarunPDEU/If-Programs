#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter Value Of a:");
    scanf("%d",&a);
    printf("Enter Value Of b:");
    scanf("%d",&b);
    if(a>b)
    printf("a is Largest Value\n");
    else
    printf("b is Largest Value\n");
    if(a<b)
    printf("a is Smallest Value\n");
    else
    printf("b is Smallest Value\n");
    if(a=b)
    printf("All Values Are Equal");
}
