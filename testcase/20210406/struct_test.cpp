#include <iostream>
using namespace std;

int main()
{
 struct time_d{
  int year;
  int month;
  int day;
  int hour;
  int minute;
  int second;
 }time_test;
 cout<<"Please input the year:"<<endl;
 cin>>time_test.year;
 cout<<"Please input the month:"<<endl;
 cin>>time_test.month;
 cout<<"Please input the day:"<<endl;
 cin>>time_test.day;
 cout<<"Please input the hour:"<<endl;
 cin>>time_test.hour;
 cout<<"Please input the minute:"<<endl;
 cin>>time_test.minute;
 cout<<"Please input the second:"<<endl;
 cin>>time_test.second;
 cout<<"The time right now is:"<<endl;
 cout<<time_test.year<<"-"<<time_test.month<<"-"<<time_test.day<<" "<<time_test.hour<<":"<<time_test.minute<<":"<<time_test.second<<endl;

}
