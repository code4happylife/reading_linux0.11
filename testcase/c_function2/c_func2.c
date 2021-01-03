#include<stdio.h>
int sum(int );
int main()
{
	int x = 19;
	x = sum(x);
	printf("\nThe sum is %d\n",x);
	return 0;
}


int sum(int x)
{	
	return (x+x);
}
