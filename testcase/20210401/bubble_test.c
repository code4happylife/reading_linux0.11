#include <stdio.h>
int main()
{
  int test_arr[]={1,2,3,4,5,6,7,8,9,100,1111,2222,3333,4444,65535,11,2,3};
  int i,j,temp;
  int length = sizeof(test_arr)/sizeof(int);
  for(i=0;i<length-1;i++){
     for(j=0;j<length-1-i;j++){
     	//if(test_arr[j] > test_arr[j+1])//from small to big
     	if(test_arr[j] < test_arr[j+1])//from big to small
        {
		temp = test_arr[j];
 		test_arr[j] = test_arr[j+1];
		test_arr[j+1] = temp;
        }
     }
  }
   for(i=0;i<length;i++){
       printf("%d\n",test_arr[i]);
   }

}
