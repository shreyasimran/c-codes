#include<stdio.h>
void shift(int *,int *,int *);
int main()
{
	int x,y,z;
	printf("\n enter the 3 values you want shift right");
	scanf("%d %d %d ",&x, &y, &z);
	shift(&x,&y,&z);
	printf("\n x=%d\n y=%d\n z=%d",x,y,z);
	return 0;
}
void shift(int *a,int *b ,int *c)
{
	int t;
	t=*a;
	*a =*b;
	*b=*c;
	*c=t;
}
	
