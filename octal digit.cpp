#include<stdio.h>
int main ()
{
	int num,i=1,remainder;
	printf("enter an integer number\n");
	scanf("%d",&num);
	while(i<=num)
	{

	if (num>=8)
	remainder=num%8;
	num=num/8;
	printf("remainder is %d\n",remainder);
	i++;
	}
}