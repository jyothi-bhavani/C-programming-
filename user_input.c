#include <stdio.h>

int main() {
	
	char name[30];
	int age = 0;
	float gpa = 0.0f;
	char grade ;
	
	printf("Enter your age:\n");
	scanf("%d", &age);
	
	printf("Enter your gpa:\n");
	scanf("%f", &gpa);
	
	printf("Enter your grade:\n");
	scanf(" %c", &grade);
	
	getchar();
	printf("Enter your name:\n");
	fgets(name, 30, stdin);
	//scanf("%s", &name);
	
	printf("%s\n", name);
	printf("%d\n", age);
	printf("%.2f\n", gpa);
	printf("%c\n", grade);
	printf("%s\n", name);
	
	return 0;
}

/* Sample Input:  20
                  7.7777
                  B
                  jyothi ravipati
   Output: Enter your age: 20
           Enter your gpa: 7.7777
           Enter your grade: B
           Enter your name: jyothi ravipati
           jyothi ravipati
           20
           7.78
           B
           jyothi ravipati  
*/
