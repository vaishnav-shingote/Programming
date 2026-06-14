#include <iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
public:
    int *Arr;
    int iSize;

    // Parametrized Constructor
    ArrayX(int X)
    {
        cout << "Inside Constructor" << "\n";
        iSize = X;            // Characteristics initialization
        Arr = new int[iSize]; // Resourse allocation
    }

    // Destructor
    ~ArrayX()
    {
        cout << "Inside Destructor" << "\n";
        delete[] Arr; // Resourse deallocation
    }
};

int main()
{
    ArrayX aobj1(5);

    return 0;
}
