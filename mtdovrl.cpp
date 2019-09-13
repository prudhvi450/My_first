#include<iostream>
using namespace std;

int sq(int x){return x*x;}
double sq(double x){return x*x;}

int main()
{
 cout<<"the square of integer 7 is:"<<sq(7)<<"\n the square of the double 7.5 is"<<sq(7.5)<<endl;

return 0;
}
