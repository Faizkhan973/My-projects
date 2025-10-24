#include<iostream>
using namespace std;

int main()
{
    int maxsum = INT_MIN;

    int sum = 0;
    int arr[5] = {1,-2,-3,-4, 5};
    int n= 5 ;
    for(int i=0 ; i< n ; i++)
    {
        sum +=  arr[i];
        maxsum = max(maxsum, sum);
        if(sum< 0)
        {
            sum=0 ;
        }
    }
    cout << "Maximum  Sub array :" << maxsum<< endl;
    return 0;
}