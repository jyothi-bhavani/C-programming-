#include <stdio.h>

int main() {
	
	int choice;
	float kilograms;
	float pounds;
	
	printf("WEIGHT CONVERTER CALCULATOR\n");
	printf("1.Kilograms to Pounds\n2.Pounds to Kilograms\n");
	printf("Enter your choice (1 or 2) :\n");
	scanf("%d",&choice);
	
	if(choice == 1){
	    printf("Enter weight in kilograms:\n");
	    scanf("%f", &kilograms);
	    pounds = kilograms * 2.20462;
	    printf("%.2f kilograms = %.2f pounds\n", kilograms, pounds);
	}
	else if(choice ==2){
	    printf("Enter weight in pounds:\n");
	    scanf("%f", &pounds);
	    kilograms = pounds / 2.20462;
	    printf("%.2f pounds = %.2f kilograms", pounds,kilograms);
	}
	else{
	    printf("Invalid choice");
	}
	return 0;
}

/* OUTPUT:
WEIGHT CONVERTER CALCULATOR
1.Kilograms to Pounds
2.Pounds to Kilograms
Enter your choice (1 or 2) : 1
Enter weight in kilograms: 25.500
25.50 kilograms = 56.22 pounds

WEIGHT CONVERTER CALCULATOR
1.Kilograms to Pounds
2.Pounds to Kilograms
Enter your choice (1 or 2) : 2
Enter weight in pounds: 25.500
25.50 pounds = 11.57 kilograms
  */
