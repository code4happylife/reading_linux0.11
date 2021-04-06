/*
 *This program use enum data-type define a self defined kind of variable to record monday to sunday.
 *The new type is weekday.
 *
 * */
#include <iostream>
using namespace std;
int main(){
enum weekday{
sunday=7,
monday=1,
tuesday,
wednesday,
thursday,
friday,
saturday
} test_1;

int day_num;
cout<<"enter a day num:"<<endl;
cin>>day_num;
test_1=(weekday)day_num;

switch(test_1){
 case 7:
    cout<<"This is sunday!"<<endl;
    break;
 case 1:
    cout<<"This is monday!"<<endl;
    break;
 case 2:
    cout<<"This is tuesday!"<<endl;
    break;
 case 3:
    cout<<"This is wednesday!"<<endl;
    break;
 case 4:
    cout<<"This is thursday!"<<endl;
    break;
 case 5:
    cout<<"This is friday!"<<endl;
    break;
 case 6:
    cout<<"This is saturday!"<<endl;
    break;
 default:
   cout<<"ERROR input!"<<endl;
}


}
