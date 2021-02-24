#include <stdio.h>
void func1(void);
static int count = 10;
int main()
{
	while(count--){
		func1();
	}
	return 0;

}

void func1(void){
	static int thin = 5;
	thin++;
	printf("thin value is :%d ,count value is :%d\n",thin,count);

}

/*
 *thin value is :6 ,count value is :9
thin value is :7 ,count value is :8
thin value is :8 ,count value is :7
thin value is :9 ,count value is :6
thin value is :10 ,count value is :5
thin value is :11 ,count value is :4
thin value is :12 ,count value is :3
thin value is :13 ,count value is :2
thin value is :14 ,count value is :1
thin value is :15 ,count value is :0

 *
 *
 *
 *
 *
 *
 *
 *
 * */
