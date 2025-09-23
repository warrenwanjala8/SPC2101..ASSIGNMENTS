//simple programme to calculate the volume,surface_area and radius of a cylinder
/*
Name:warren seith
Reg No:PA106/G/29294/25
Description:to compute the volume,surface_area and radius of a cylinder
*/
#include <stdio.h>
#define PI 3.142

//main function
int main(){
	float surface_area,volume,radius,height;
	
    
	printf("Enter the radius of the cylinder: ");
	scanf("%f",&radius);
	
	printf("Enter the height of the cylinder: ");
	scanf("%f",&height);
	
	
	volume = PI * radius * radius * height;
	surface_area = 2 * PI * radius * height + 2 * PI * radius * radius;
	
	
	printf("volume of cylinder: %.2f\n",volume);
	printf("surface_area of the cylinder: %.2f\n",surface_area);
	
	return 0;
}