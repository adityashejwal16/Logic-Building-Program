using namespace std;
#include<iostream>

 int Addition(int A, int B)
{
    return A+B;
}

int main()
{
    int iRet =0;
    iRet = Addition(10,11);

    cout<<"Addition is :"<<iRet<<"\n";
    return 0;
}