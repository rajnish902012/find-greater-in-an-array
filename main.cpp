#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    for(int i=1;i<=4;i++)
    {
        if(arr[0]<arr[i])
        {
            arr[0]=arr[i];
        }
        else
        {
            continue;
        }

    }
    cout<<"greater"<<arr[0];



    return 0;
}
