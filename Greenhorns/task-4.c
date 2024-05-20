#include<stdio.h>
main(){

	int gross_salary,bs,hra,da,ta;
	
	printf("Enter Salary : ");
	scanf("%d",&bs);
	
	hra = bs * (10.00/100.00);
	da = bs * (05.00 / 100.00);
	ta = bs * (08.00/100.00);
	
	gross_salary = bs + hra + da + ta;
	
	printf("Gross Salary = %d\n",gross_salary);
}

