#include<stdio.h>
void converted_weight(float ,float *,float *,float*);
int main ()
{
 float kg,g,t,p;
printf("\n enter the weight in kilograms to convert into grams,tons,and pounds");
scanf("%f",&kg);
converted_weight(kg,&g,&t,&p);
printf("\n the equivalent weight of %f kg in tons is equal to %f tons",kg,t);
printf("\n the equivalent weight of %f kg is equal to %f grams",kg,g);
printf("\n the equivalent weight of %f kg in pounds is equal to %f pounds",kg,p);
return 0;
}
void converted_weight(float a,float *b,float *c,float *d)

{

*b=1000*a;
*c=0.00110230*a;
*d=2.2058*a;
}