// to calculate distance of two latitude & longitude in nautical miles
#include<stdio.h>
#include<math.h>
int main()
{
	int l1,l2,g1,g2,d;
	printf("\n enter the values of initial latitude and longitude");
	scanf("%d %d",&l1,&g1);
	printf("\n enter the values of final latitude and longitude");
	scanf("%d %d",&l2,&g2);
	d=3963*pow(cos,-1)*(sin l1*sin l2+ cos l1*cosl2*cos(g2-g1));
	printf("\n the distace  in nautical miles is %d",d);
	return 0;
}