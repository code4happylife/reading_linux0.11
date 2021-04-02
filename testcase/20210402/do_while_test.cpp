#include <iostream>
using namespace std;
int main()
{
int a, temp;
cout<<"Please input number a:"<<endl;
cin>>a;
cout<<"The reverse number of a is:"<<endl;
do{
 temp = a % 10;
 cout<<temp;
 a/=10;
}while(a!=0);

cout<<endl;
return 0;
}
