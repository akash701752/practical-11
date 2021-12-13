// Practical 11 lab 06/12/2021
// Task 3 : Diamond Problem .
#include <iostream>

using namespace std;

class A
{
    public :
       int x ;
       void didplay()
       {
         cout<<"Value of X is : "<<x<<endl ;
       }
};
class B : public A
{
    public :
     void display1()
     {
       x = 10 ;
       cout<<"Value of X in Class B is : "<<x<<endl ;
     }
};

class C : public A
{
  public :
     void display2()
     {
       x = 20 ;
       cout<<"Value of X in Class C is : "<<x<<endl ;
     }
};

class D : public B , public C  
{
  
};

int main()
{
    B objb ;
    objb.display1() ;
    C objc ;
    objc.display2() ;
    D objd ;
    objd.display1() ; // works fine
    objd.display2() ; // works fine 
    objd.display()  ; // Gives error b/c Diamond problem Created
                      // Compiler gets Ambigous 
    return 0;
}
