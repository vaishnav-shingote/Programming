#include<iostream>
using namespace std;

void Display(double Arr[], int Size)
{
    for(int i = 0; i<Size; i++)
    {
        cout<<Arr[i]<<"\n";
    }
}
int main()
{

    double Brr[] = {10.1,20.2,30.3,40.5,50.6};
    Display(Brr, 5);
}
