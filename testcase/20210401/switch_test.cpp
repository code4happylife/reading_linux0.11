/*
 *This program is used for C++ programming language test
 *
 */
#include <iostream>
using namespace std;

int main()
{
  int a;
  cout<<"Please input a number to identify its weekday info"<<endl;
  cin>>a;
  switch(a){
	case 1:
		cout<<"Monday."<<endl;
  		break;
        case 2:
		cout<<"Tuesday."<<endl;
		break;
        case 3:
		cout<<"Wednesday."<<endl;
  		break; 
	case 4:
		cout<<"Thursday."<<endl;
  		break;
        case 5:
		cout<<"Friday."<<endl;
		break;
        case 6:
		cout<<"Saturday."<<endl;
  		break;
        case 7:
		cout<<"Sunday."<<endl;
  		break;
	default:
		cout<<"Non sense input!"<<endl;
		break;
	}  
return 0;
}
