#include<iostream>
using namespace std;
class parent
{
 public:
  int id_p;
};
class child : public parent
{
 public:
 int id_c;
};
int main()
{
 child obj1;

 obj1.id_p=7;
 obj1.id_c=9;

cout<<"\nchild id is"<<obj1.id_p;
cout<<"\nparent id is"<<obj1.id_c;


return 0;
}
