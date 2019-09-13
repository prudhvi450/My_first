#include<iostream>
using namespace std;

int maximum(int , int ,int);
int mini(int,int,int);
int main()
{
 int a,b,c,max;
cout<<"Enter three integers:";
cin>>a>>b>>c;
cout<<"maximum of a,b,c are:"<<maximum(a,b,c)<<endl;
cout<<"\n minimum of a,b,c are:"<<mini(a,b,c)<<endl;
return 0;
}
int maximum(int a,int b,int c)
{
 int max=a;
 
 max=(b>max)?b:a;
 max=(c>max)?c:a;

 //if(b>max)max=b;
 //if(c>max)max=c; 
return max;
}
int mini(int a,int b,int c)
{
 int min=a;
 
 min=(b<min)?b:a;
 min=(c<min)?c:a;

//if(b<min)min=b;
//if(c<max)min=c;
return min;
}
