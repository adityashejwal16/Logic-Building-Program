#include<iostream>
using namespace std;

// OOP Approach( Specific)

class Arithematic
{
    public:
        int No1;
        int No2;
     
    Arithematic(int A, int B)
    {
        No1 = A;
        No2 = B;

    }
    int Addition()
    {

        int Ans =0;
        Ans = No1 + No2;
        return Ans;
    }
    int Substraction()
    {

        int Ans =0;
        Ans = No1 - No2;
        return Ans;
    }
};



int main()
{
    Arithematic aobj1(11,10);
    Arithematic aobj2(101,50);

    cout<<aobj1.Addition()<<"\n";
    cout<<aobj2.Substracton()<<"\n";
    return 0;
}