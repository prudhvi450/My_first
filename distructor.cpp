#include<iostream>
using namespace std;
int x=0;
class printf
{
 public:
 printf()
 {
  ++x;
  cout<<x<<endl;
 }
 ~printf()
 {
  cout<<x*x<<endl;
  --x;
 }
};

int main()
{

printf p[10];

return 0;
}
