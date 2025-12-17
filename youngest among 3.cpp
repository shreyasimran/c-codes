// to find youngest among ram,shyam,and ajy
#include<stdio.h>

int main()
{s
	int ageofr,ageofs,ageofa;
	printf("\n enter the age of ram,shyam and ajay respectively");
	scanf("\n %d,%d,%d",&ageofr,&ageofs,&ageofa);
	if (ageofr==ageofs && ageofs==ageofa)
	printf("\n the age of of all the three person is equal");
	else
	{
	
	if (ageofr<ageofs && ageofr<ageofa)
	{
	
	printf("\n ram is youngest of the three");
}

		
	 else if (ageofs<ageofa)
	 {
	 
	printf("\n shyam is youngest of the three");
}
	else
	printf("\n ajay is youngest among the three");
}
	
	
	return 0;
}
	


	
	
	
	
	
	


	
