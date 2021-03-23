#include<iostream>
#include<iomanip>
using namespace std;
int add(int, int);
double add(double, double);
int add(int,int,int);
int main()
{
  cout<<"Function with two integer arguments : "<<add(2,3)<<endl;
  cout<<"Function with two float arguments : "<<add(2.0,3.4)<<endl;
  cout<<"Function with three integer arguments : "<<add(1,2,3)<<endl;
  return 0;
}
int add(int x,int y)
{
  return x+y;
}
double add(double x,double y)
{
  return x+y;
}
int add(int x,int y,int z)
{
  return x+y+z;
}
