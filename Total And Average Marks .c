#include <stdio.h>

int main()
{
	float p,c,m,a,t;
	printf("Enter Marks Of Physics Out Of 100:");
	scanf("%f",&p);
	printf("Enter Marks Of Chemistry Out Of 100:");
	scanf("%f",&c);
	printf("Enter Marks Of Maths Out Of 100:");
	scanf("%f",&m);
	printf("Total Marks:%f\n",t=p+c+m);
	printf("Average Marks Of Three Subjects:%f\n",a=t/3);
	if(a>100)
	printf("Invalid Marks\n");
	else
	{
	if(a>=70)
		printf("Distinction\n");
	else
	{
	if(a>=60)
		printf("First Class\n");
	if(a>=50)
		printf("Second Class\n");
	if(a>=35)
		printf("Third Class\n");
	if(a<35)
		printf("Fails\n");
	}
	}
}