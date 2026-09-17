#include<iostream>
using namespace std;

void Display(double Arr[], int Size)
{
    for(int i = 0; i<Size; i++)
    {
        cout<<Arr[i]<<"\n";
    }
}

double Summation(double Arr[], int Size)
{
    double Sum = 0.0;
    int i = 0;
    for(i = 0; i<Size; i++)
    {
        Sum = Sum+Arr[i];  
    }
    return Sum;

}
int main()
{

    double Brr[] = {10.1,20.2,30.3,40.5,50.6};
    Display(Brr, 5);
    cout<<Summation(Brr, 5)<<"\n";
}
