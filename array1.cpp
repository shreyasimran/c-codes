#include<stdio.h>
int main()
{
	int num[25];
	int i,pos=0,neg=0,even=0,odd=0;
	
	
		printf ("\n enter your twenty five numbers to count positive,negative,even and odd");
		for (i=0;i<=24;i++)
		{
		
		scanf("%d",&num[i]);
		
	}
	for (i=0;i<=24;i++)
	{
		if (num[i]>0)
		pos++;
		if (num[i]<0)
		neg++;
		if(num[i]%2==0)
		even++;
		else 
		odd++;
	}
	printf("\n there are total %d positive numbers",pos);
	printf("\n there are total %d negative numbers",neg);
	printf("\n there are total %d even numbers",even);
	printf("\n there are total %d odd numbers",odd);
return 0;
}