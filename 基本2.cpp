#include<stdio.h>
#include<stdlib.h>

int main()
{
	int year,month,day;
	printf("Please enter your date of birth (AD)¡G");
	scanf("%d",&day) ;
	printf("Please enter your birth month (AD)¡G");
	scanf("%d",&month) ;
	printf("Please enter your birth year (AD)¡G");
	scanf("%d",&year) ;
	printf("Your date of birth is¡G%d,%d,%d\n",day,month,year);
	system("pause");
	return 0;
}
