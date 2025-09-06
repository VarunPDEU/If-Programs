#include <stdio.h>

float main()
{
    float s;
    printf("Enter Gross Salary:");
    scanf("%f",&s);
    if(s>10000)
    printf("Net Salary:%f",s+0.1*s-0.03*s);
    if(s>5000)
    printf("Net Salary:%f",s+0.07*s-0.02*s);
    else
    printf("Gross Salary Should Be Greater Than 10000 or 5000");
}
