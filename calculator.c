#include <stdio.h>

int main() {
	
	double num1;
	double num2;
	char Operator;
	double result;
	
	printf("Enter num1:\n");
	scanf("%lf", &num1);
	printf("Enter operator(+ - * /):\n");
	scanf(" %c", &Operator);
	printf("Enter num2:\n");
	scanf("%lf", &num2);
	
	switch(Operator){
	    case '+' :
	        result = num1 + num2;
	        break;
	    case '-' :
	        result = num1 - num2;
	        break;
	    case '*' :
	        result = num1 * num2;
	        break;
	    case '/' :
	        result = num1 / num2;
	        break;
	    default:
	        printf("Invalid Operator\n");
	}
	printf("Result = %.4lf", result);
	return 0;
}
/* OUTPUT:
Enter num1: 12.41
Enter operator(+ - * /): +
Enter num2: 3.66
Result = 16.0700
  */
