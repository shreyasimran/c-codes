#include<stdio.h>
int main ()
{
	int line,w=841,h=1189,t;
	for(line=0;line<9;line++)
	{
		printf("\n a%d:%d*%d",line,w,h);
		t=h;
		h=w;
		w=t/2;
	}
return 0;
	
}