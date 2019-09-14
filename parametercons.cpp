#include<iostream>
using namespace std;
class point
{
 private:
    int x,y;
 public:
    point(int x1,int y1)
    {
     x=x1;y=y1;
    }
    int getx(){return x;}
    int gety(){return y;}

};
int main()
{
 point o(10,15);
 cout<<"\n x="<<o.getx();
 cout<<"\n y="<<o.gety();
return 0;
}
