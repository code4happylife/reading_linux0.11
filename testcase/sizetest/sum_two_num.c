#include <stdio.h>

int x;
int y;

int addtwonum(){
	extern int x;
	extern int y;
	x = 1;
	y = 2;
	return x+y;

}


int main()
{
	int result;
	result = addtwonum();
	printf("result value is :%d",result);
	return 0;
}
