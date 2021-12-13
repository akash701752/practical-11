// Practical 11 
// Task 2 : To create Class of mammals , marine animals and bluewhale and Perform Inheritance
// 13/12/2021
#include <iostream>

using namespace std;
class Mammals 
{
    public :
        void d1()
        {
            cout<<"I am Mammals Class "<<endl ;
        }
};
class Marine_animals
{
    public :
        void d2()
        {
            cout<<"I am Marine Animals  Class "<<endl ;
        }
};
class Bluewhale : public Mammals , public Marine_animals
{
    public :
        void d3()
        {
            cout<<"I am BlueWhale  Class "<<endl ;
        }
};

int main()
{
    cout<<"\t\tAkash Yadav 200111076 A"<<endl ;
    Mammals m ;
    m.d1() ;
    Marine_animals ma ;
    ma.d2() ;
    Bluewhale bw ;
    bw.d3() ;
    cout<<"Now Calling Function of Derived Class Using Child object "<<endl ;
    bw.d1() ;
    bw.d2() ;
    return 0;
}
