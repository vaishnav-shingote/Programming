#include<iostream>
using namespace std;

template <class T>
T Maximum(T no1, T no2, T no3)
{
    if(no1>no2&&no1>no3)
    {
        return no1;
    }
    else if(no2>no3 && no2>no1)
    {
        return no2;
    }
    else
    {
        return no3;
    }
}
int main()
{

    cout<<Maximum(11,22,24)<<"\n";
    cout<<Maximum(11.5f,22.6f,4.5f)<<"\n";
    cout<<Maximum(11.5,22.5,24.65)<<"\n";

    return 0;
}