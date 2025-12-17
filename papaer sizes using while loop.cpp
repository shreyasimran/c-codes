#include<stdio.h>
int main()
{
	int line,h,w,t;
	line=1;
	h=1189;
	w=841;
	t;
	while(line<=8)
	{
		t=h;
		h=w;
		w=h/2;
		printf("\n A%d/:%d*%d",line,h,w);
		
	}
	printf("\n",line);
	line++;
	return 0;
}