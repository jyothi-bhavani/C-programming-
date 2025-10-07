#include <stdio.h>

int main() {
	
	int dayofweek;
	
	printf("Enter the dayofweek (1-7):\n");
	scanf("%d",&dayofweek);
	
	switch(dayofweek){
	    case 1:
	        printf("Monday");
	        break;
	    case 2:
	        printf("Tuesday");
	        break;
	    case 3:
	        printf("Wednesday");
	        break;
	    case 4:
	        printf("Thursday");
	        break;
	    case 5:
	        printf("Friday");
	        break; 
	    case 6:
	        printf("Saturday");
	        break;
	    case 7:
	        printf("Sunday");
	        break;   
	    default:
	        printf("please enter between 1-7");
	        break;
	}
	return 0;
}
/* OUTPUT:
Enter the dayofweek (1-7): 6
Saturday
*/

