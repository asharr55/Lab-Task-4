#include<stdio.h>

int main(){
	int firstnum,secondnum;
	printf("Please put firstnumber ");
	scanf("%d", &firstnum);
	
	printf("Please put second number ");
	scanf("%d",&secondnum);
	
	if(firstnum>secondnum)
	{	
		if(firstnum>100)
		printf("First number is significantly larger ");
		else
		printf("First number is larger");
		
		}
	else
	{	if(firstnum<0)
		{printf("First number is negative and smaller");}
		else if(secondnum>firstnum) 
		{printf("First number is smaller");
		}
		if(firstnum==secondnum)
		printf("Both Numbers are Equal");
	}
	return 0;
}
