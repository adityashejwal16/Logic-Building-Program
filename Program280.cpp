#include<iostream>
using namespace std;

// OOP Approach( Generic)
 
template<class T>
class Arithematic
{
    public:
        T No1;
        T No2;
     
    Arithematic(T A, T B)
    {
        No1 = A;
        No2 = B;

    }
    T Addition()
    {

        T Ans = 0;
        Ans = No1 + No2;
        return Ans;
    }
    T Substraction()
    {

        T Ans =0;
        Ans = No1 - No2;
        return Ans;
    }
};



int main()
{
    Arithematic <int> aobj1(11,10); 
    Arithematic  aobj2(101,50);  

    cout<<aobj1.Addition()<<"\n";
    cout<<aobj1.Substracton()<<"\n";

    cout<<aobj2.Addition()<<"\n";
    cout<<aobj2.Substracton()<<"\n";
    return 0;
}