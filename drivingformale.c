#include<stdio.h>
int main()
{
	
	char gender;
	int age;
	
	printf("\nEnter Any Gender:");
	scanf("%c",&gender);
	
	printf("\nEnter Any Age:");
	scanf("%d",&age);
	
	if(age>=18 && gender>='m'/'f')
	
	{
		printf("\nDriving Allowed For Male Driver");
	}
	else 
	{
		printf("\nDriving Not Allowed For Male Driver");
	}
  return 0;

}