#include <iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
private:
    int *Arr;
    int iSize;

public:
    // Parametrized constructor with default argument
    ArrayX(int X = 5)
    {
        iSize = X;
        Arr = new int[iSize];
    }

    ~ArrayX()
    {
        delete[] Arr; // Resourse deallocation
    }
};

int main()
{

    ArrayX *aobj1 = new ArrayX();   // Parametrised constuctor
    ArrayX *aobj2 = new ArrayX(15); // Parametrised constuctor

    // Function Call

    delete aobj1;
    delete aobj2;
    return 0;
}
