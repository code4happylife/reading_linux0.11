#include <stdio.h>
#include <float.h>

int main()
{
	printf("float contains %lu bytes\n",sizeof(float));
	printf("The max value of float number:%E\n",FLT_MAX);
	printf("The min value of float number:%E\n",FLT_MIN);
	printf("Precision of float number is :%d\n",FLT_DIG);
	return 0;

}
