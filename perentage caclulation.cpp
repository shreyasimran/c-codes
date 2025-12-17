#include<stdio.h>
int main()
{

float mh,mm,ms,mso,msc,per,tot;
printf("\n enter marks of 5 sub");
scanf("%i,%i,%i,%i,%i",mh,mm,msc,mso,ms);
tot=mh+ms+mm+mso+msc;
per=tot/5.0;{
	
printf("%i,%i",tot,per);}
if(per>=75){

printf("distinction");
}
return 0;
}