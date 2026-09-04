#include<iostream>
#include<iterator>
#include<vector>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5};
    int maxSum = INT8_MIN;


    for(int i = 0; i<5; i++)
    {
        int currSum = 0;
        for(int j = i; j<5; j++)
        {
            currSum += arr[j];
            maxSum = max(maxSum, currSum);
            for(int k = i; k<=j; k++)
            {
                cout<<arr[i];
            }
            cout<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}