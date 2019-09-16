#include<iostream>
using namespace std;
class date
{
 public:
 date(int=1,int=1,int=1990);
 void print();
 private:
  int month;
  int day;
  int year;
};

date::date(int m,int d,int y)
{
 month=m;
 day=d;
 year=y;
}
int main()
{
 date date1(7,4,1991),date2;

 cout<<"date1="<<date1.print();
 cout<<"\ndate2="<<date2.print();
 date2=date1;
cout<<"\nafter default memberwise copy"<<date2.print();


return 0;
}
