#include<iostream>
using namespace std;
#define PI 3.14f
class shape
{
 public:
  int x,l,b;
  float bs,h,r;
 int sq(int x){return x*x;}
 int rect(int l,int b){return l*b;}
 float tri(float bs,float h){return 0.5*bs*h;}
 float clc(float r){return PI*r*r;}
};
int main()
{
int x,l,b;
float bs,h,r;
shape s;
cout<<"enter side of sq:"<<endl;
cin>>x;
cout<<"Area of sq is:"<<s.sq(x)<<endl;

cout<<"Enter length and breadth of rectangle:"<<endl;
cin>>l>>b;
cout<<"Area of rectangle is:"<<s.rect(l,b)<<endl;

cout<<"Enter base and height of triangle:"<<endl;
cin>>bs>>h;
cout<<"Area of rectangle is:"<<s.tri(bs,h)<<endl;

cout<<"Enter radius of circle:"<<endl;
cin>>r;
cout<<"Area of circle:"<<s.clc(r)<<endl;
return 0;
}
