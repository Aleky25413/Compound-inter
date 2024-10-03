#include <stdio.h>
#include <math.h>
int main()
{
double p,r,t,ci,a;
printf("enter principle,rate,time,=",p,r,t);
scanf("%lf,%lf,%lf",&p,&r,&t);

a=p*pow((1+r/100),t);

ci=a-p;

printf("the amount is %.2lf\n",a);
printf("the compound interest is %.2lf\n",ci);

	
return 0;	
}