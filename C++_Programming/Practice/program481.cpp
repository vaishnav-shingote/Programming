#include<iostream>
using namespace std;

void Display(int Arr[], int Size)
{
    for(int i = 0; i<Size; i++)
    {
        cout<<Arr[i]<<"\n";
    }
}
int main()
{

    int Brr[] = {10,20,30,40,50};
    Display(Brr, 5);
}
