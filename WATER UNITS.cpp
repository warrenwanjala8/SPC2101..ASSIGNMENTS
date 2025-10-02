/*
Name;warren wanjala
Reg no;PA1006/G/29294/25
Description;programe to display water units
*/
#include <stdio.h>
//main function

int main(){
	 int units;
	 float bill=0.0;
	 
	 printf("Enter units of water consumed:");
	 scanf("%d",&units);
	 
	 if(units>=0&&units<=30){
	 	bill= units*20;
	 	
	 }else if(units>30&&units<=60){
	 	bill=30*20+ ((units-30)*25);
	 	
	 }else if (units>60){
	 	bill=(30*20)+(30*25)+((units-60)*30);
	 	
	 	printf("invalid units consumed.units cannot be negative\n");
	 }
	 
	 printf("Total bill of water is :%2f ksh\n",bill);
	 return 0;
}