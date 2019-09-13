#include<iostream>
using namespace std;
int boxvolume(int length=1,int width=1,int height=1);
int main()
{
cout<<"the default bopx volume is:"<<boxvolume()<<"\n\n the volume of the box with the length 10,\n"<<"width 1 and height 1 is:"<<boxvolume(10,1,1)<<"\n\n the volume of abox with length 10\n"<<"width 5 and height 1 is:"<<boxvolume(10,5,1)<<"\n\n the volume of the box with length 10\n"<<"width 5 and height 2 is"<<boxvolume(10,5,2)<<endl;
return 0;
}
int boxvolume(int length,int width,int height)
{return length*width*height;}

