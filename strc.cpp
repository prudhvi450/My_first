#include<iostream>
using namespace std;
struct time
{
  int hr;
  int min; 
  int sec;
};
void printmilitary(const time &);

//void printstandard(const time &p)
//{



//}
int main()
{
 time dinnertime;
dinnertime.hr=21;
dinnertime.min=45;
dinnertime.sec=10;

cout<<"dinner will be held at\n";
printmilitary(dinnertime);
cout<<"militarytime,\n which is";
//printstandard(dinnertime);
//cout<<"standard time";

dinnertime.hour=29;
dinnertime.min=75;

cout<"\nTime which is invalid values";
printmilitary(dinnertime);
cout<<endl;

return 0;
}
void printmilitary(const time &)
{
 cout<<(t.hr<10?"0":"")<<t.hr<<";"
  <<(t.min<10?"0":"")<<t.min;
}
