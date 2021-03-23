#include<iostream>
#include<iomanip>
using namespace std;
void function1();//function prototype
void function2();
void function3();
int x = 10;//global
int main()
{
  cout<<"hello!!";
  function1();
  function2();
  function3();
  return 0;
}
void function1()
{
  cout<<"\nfunction 1:";
  x++;
  cout<<x<<endl;//now x is 11
}
void function2()
{
  x=x*2;
  cout<<"Function 2:"<<x<<endl;
}
void function3()
{
  cout<<x<<endl;
}
