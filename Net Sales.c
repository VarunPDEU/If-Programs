#include <stdio.h>

int main()
{
	float s;
	printf("Enter Gross Sales:");
	scanf("%f",&s);
	if(s>=20000)
	printf("Net Sales is:%f",s-0.15*s);
	else
	{
	    if(s>=10000)
	    printf("Net Sales is:%f",s-0.10*s);
	    if(s<10000)
	    printf("Net Sales is:%f",s-0.05*s);
	}
}