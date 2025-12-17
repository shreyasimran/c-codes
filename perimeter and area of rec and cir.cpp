/* calculation of area and perimeter of rectangle and circle*/
#include<stdio.h>
int main()
{

float l,b,r,ar_of_R,ar_of_C,p_of_C,p_of_R;
printf("enter the value of length and breadth of rectangle");
scanf("%f,%f",&l,&b);
ar_of_R=l*b;
p_of_R=(l+b)*2;
printf("area of rectangle is %f\n",ar_of_R);
printf("\n perimeter of rectangle is %f",p_of_R);
printf("\nenter the radius of circle");
scanf("%f",&r);
ar_of_C=3.14*r*r;
p_of_C=2*3.14*r;
printf("area of circle is %f \n",ar_of_C);
printf( "circumference of circle is %f\n",p_of_C);
return 0;
}

