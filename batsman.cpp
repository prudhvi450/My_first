#include<iostream>
using namespace std;
static int i;
class batsman
{
 public:
  void ipl(){i++;}
  void icc(){i++;}
  void wcc(){i++;}
  void odi(){i++;}
};
int main()
{
 batsman ip;
 ip.ipl(); ip.ipl();
 ip.icc();ip.icc();ip.icc();
 cout<<i<<endl;
return 0;
}
