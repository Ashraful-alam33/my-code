#include<iostream>
using namespace std;
namespace demo1
{
int x=-10;
int f()
{
  return x+x;
}
}
namespace demo2
{
int x=-100;
int f()
{
    return x*x;
}
}
int main()
{
    int x=10;
    cout << x<< ' '<< demo1::f() << ' '<< demo2::f() << endl;
    return 0;
}
