#include <stdio.h>


struct LIST{
int a,b;
}d={3,9},e={2,8};

int disp(struct LIST);
int main()
{
	struct LIST f={5,7};
	printf("%d,%d\n",d.a,d.b);
	disp(d);
	disp(e);
	printf("%d,%d\n",f.a,f.b);
	return 0;

}

int disp(struct LIST s)
{
	printf("%d,%d\n",s.a,s.b);
	return 0;
}
