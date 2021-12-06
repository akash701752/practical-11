// Practical 11 lab 06/12/2021
// Task 2 : Access Specifiers in Inheritance .
#include <iostream>

using namespace std;

class A
{
    public :
       int x ;
    protected :
       int y ;
    private :
       int z ;
};
class B : public A
{
    public :
     void display()
     {
       x = 10 ; // Inheritance b/c x,y are data members of Class A
       //y = 20 ; // Inheritance b/c x,y are data members of Class A
       //z = 30 ; // Wrong b/c z is Private member of Class A
       cout<<"X = "<<x <<endl ;
       //cout<<"Y = "<<y <<endl ;
       //cout<<"Z = "<<z <<endl ;
     }
};
int main()
{
    B obj ;
    //obj.x = 30 ;   // right 
    //obj.y = 40 ; // wrong b/c y is protected can not access through 
                   // object of Class B but can be accessed through 
                   // object of Child class of Class B .
    
    obj.display(); 
    return 0;
}
