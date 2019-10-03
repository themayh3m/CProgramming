#include<stdio.h>
int main()
{
	int age; 
	char gen,stat;
	printf("\tMARITAL STATUS(Y/N) & GENDER(M/F): ");
	scanf("%c%s",&stat,&gen);
	printf("\tINPUT AGE: ");
	scanf("%d",&age);
	if(stat=='Y')
		printf("\tELIGIBLE FOR INSURANCE\n");
	else if(gen=='M' && age==30 )
		printf("\tELIGIBLE FOR INSURANCE\n");
	else if(gen=='F' && age==25)
		printf("\tELIGIBLE FOR INSURANCE\n");
	else
		printf("\tYOU ARE INELIGIBLE FOR INSURANCE\n");
	return 0;
}