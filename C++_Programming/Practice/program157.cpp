#include <iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
public:
    int *Arr;
    int iSize;

    // Default Constructor
    ArrayX()
    {
    }

    // Parametrized Constructor
    ArrayX(int X)
    {
    }
};

int main()
{
    ArrayX aobj1;    // Default
    ArrayX aobj2(5); // Parametrized

    cout << sizeof(aobj1) << endl; // 12 bytes
    return 0;
}
