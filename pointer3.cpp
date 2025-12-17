#include<stdio.h>
void shift( int *,int*,int*);
int main()
{
	int x,y,z;
	printf("enter the 3 values you want to shift right\n");
	scanf("%d %d %d",&x,&y,&z);
	shift(&x,&y,&z);
	printf("%d,%d,%d",x,y,z);
	return 0;
	
}
void shift(int *a, int *b, int *c)
{
	int t;
	t=*a;
	*a=*b;
	*b=*c;
	*c=t;
}