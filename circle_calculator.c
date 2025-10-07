#include <stdio.h>
#include <math.h>

int main() {
    
	double radius;
	double area;
	double circumference;
	double surface_area;
	double volume;
	const double PI = 3.141592;
	
	printf("Enter the radius:\n");
	scanf("%lf", &radius);
	
	area = PI * pow(radius,2);
	circumference = 2 * PI * radius;
	surface_area = 4 * PI * pow(radius,2);
	volume = (4.0/3.0) * PI * pow(radius, 3);
	
	printf("Area of circle: %.2lf\n", area);
	printf("circumference of circle: %.2lf\n", circumference);
	printf("surface Area of sphere: %.2lf\n", surface_area);	
	printf("volume of sphere: %.2lf", volume);
	return 0;
}
/*
OUTPUT:
Enter the radius:
10
Area of circle: 314.16
circumference of circle: 62.83
surface Area of sphere: 1256.64
volume of sphere: 4188.79
  */
