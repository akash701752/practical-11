// Practical 11 lab 06/12/2021
// Task 3 : Diamond Problem .
#include <iostream>

using namespace std;

class A
{
    public :
       int x ;
       void display()
       {
         cout<<"Value of X is : "<<x<<endl ;
       }
};
class B : virtual public A // solution to Diamond Problem
{
    public :
     void display1()
     {
       x = 10 ;
       cout<<"Value of X in Class B is : "<<x<<endl ;
     }
};

class C :virtual public A // solution to Diamond Problem
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
    /*
    B objb ;
    objb.display1() ;
    C objc ;
    objc.display2() ;
    */
    D objd ;
    objd.display1() ; // works fine
    objd.display2() ; // works fine 
    //objd.x = 100 ;
    objd.display()  ; // Works Fine b/c of Virtual base class of A and B
                    
    return 0;
}
