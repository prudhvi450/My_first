#include<iostream>
using namespace std;

class player
{ 
 private: 
    int r, w; 
public: 
    player(int r1, int w1) { r = r1; w = w1; } 

    player(const player &p2) {r = p2.r; w=0;} 
    player(){r=0;w=0;}
  int getr(){return r;}
  int getw(){return w;}
};

int main()
{
 player p1(100,5),p2(305,100),p3(18000,50);
 player p4=p1,p5=p2,p6=p3;
 

 cout<<"\np1 runs:"<<p1.getr()<<"\n p1 wickets:"<<p1.getw();
 cout<<"\np2 runs:"<<p2.getr()<<"\n p2 wickets:"<<p2.getw();
 cout<<"\np3 runs:"<<p3.getr()<<"\n p3 wickets:"<<p3.getw();
 cout<<"\np4 runs:"<<p4.getr()<<"\n p4 wickets:"<<p4.getw();
 cout<<"\np5 runs:"<<p5.getr()<<"\n p5 wickets:"<<p5.getw();
 cout<<"\np6 runs:"<<p6.getr()<<"\n p6 wickets:"<<p6.getw();
return 0;
}
