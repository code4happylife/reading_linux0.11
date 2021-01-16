#include <stdio.h>
int main()
{
	int price = 0;
	int bill = 0;
	
	printf("Please input the price: ");
	scanf("%d",&price);
	printf("Please input bill:");
	scanf("%d",&bill);

	if( bill > price ){

		printf("Should change you:%d\n", bill - price);
	}
	else{
		printf("Your change is not enough");
	}


}
