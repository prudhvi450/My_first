#include<iostream>
using namespace std;
int x=1;
void a(void)
{
 int x=25;
 
 cout<<endl<<"Local x in a is "<<x<<" after enteriung a"<<endl;
 ++x;
 cout<<"Local x in a is "<<x<<" before exiting a"<<endl;

}
void b(void)
{
 static int x=50;
 
  cout<<endl<<"Local static x in b is "<<x<<" on enteriung b"<<endl;
 ++x;
 cout<<"Local static x in b is "<<x<<" on exiting b"<<endl;
}
void c(void)
{
 cout<<endl<<"global x is: "<<x<<" on entering c"<<endl;
 x*=10;
 cout<< "global x is "<<x<<" on exiting c"<<endl;
}

int main()
{
 int x=5;
 cout<<"Local x in outer scope of main is "<<x;
 {
  int x=7;
  cout<<"\nLocal x in inner scope of main is "<<x;

 }
cout<< "\nLocal x in outer scope of main is "<<x;
a();
b();
c();
a();
b();
c();

return 0;
}
