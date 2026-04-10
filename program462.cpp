#include<iostream>
using namespace std;

template <class T>
T Addition(T No1, T No2)
{
    T Ans;
    Ans = No1 + No2;
    return Ans;
}

int main()
{
    cout<<"Addition of characters : "<<Addition('a','b')<<"\n";
    cout<<"Addition of integers : "<<Addition(11,10)<<"\n";
    cout<<"Addition of floats : "<<Addition(90.3f,78.5f)<<"\n";
    cout<<"Addition of doubles : "<<Addition(78.67897,45.76454)<<"\n";
    
    return 0;
}