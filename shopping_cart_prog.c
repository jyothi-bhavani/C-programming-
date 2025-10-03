#include <stdio.h>

int main() {
	
	char item[50];
	float price;
	int quantity;
	float total;
	char currency[]= "INR";
	
	printf("What item would you like to buy?:\n");
	fgets(item, sizeof(item), stdin);
	
	printf("Price of each item?:\n");
	scanf("%f", &price);
	
	printf("How many you want to buy?:\n");
	scanf(" %d", &quantity);
	
	printf("You have bought %d items\n", quantity);
	total = quantity * price;
	printf("Total Amount:%.2f%s", total,currency);
	
	return 0;
}

/*
Sample Input: Veg Pizza
              98.26
              3
  Output: 
What item would you like to buy?: Veg Pizza
Price of each item?: 98.26
How many you want to buy?: 3
You have bought 3 items
Total Amount:294.78INR
  */
