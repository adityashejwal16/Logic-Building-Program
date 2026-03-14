#include<iostream>

class Demo
{
   public:
    int No1;
    int No2;

    Demo(int A, int B)
    {
        cout<<"Inside Constructor";
        this ->No1 =A;
        this ->No2 =B;
    }
};
using namespace std;

int main()
{
    Demo *obj = new Demo(10,11);
    return 0;
}