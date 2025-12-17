#include<stdio.h>
int main()
{
	int l,b,area, perimeter;
	printf("enter the lentgh and breadth of rectangle respectively\n");
	scanf("%d,%d",&l,&b);
	area=l*b;
	perimeter=2*(l+b);
	if (area==perimeter)
	{
		printf("\n  both the area and perimeters are equal");
		
	}
		else
		{
			if(area>perimeter)
			{
printf("area is greater than perrimeter\n");

			}			else 
			printf("\n perimeter is greater");
		}
		return 0;
	}
