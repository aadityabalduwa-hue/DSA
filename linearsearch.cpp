//total time complexity o(n) and space complexity o(1)
#include<iostream>
using namespace std;
int linearsearch(int arr[],int size,int target)
{
    for(int i=0;i<size;i++) 
    {
        if(arr[i]==target)
        {
            cout<<"Element found at index: "<<i<<endl;
            return i;
        }
    }
    cout<<"Element not found"<<endl;
    return -1;
}
int main()
{
 int arr[]={1,2,3,4,5,6,7,8,9,10};
 int size= sizeof(arr)/sizeof(arr[0]);
 int target=15;
 linearsearch(arr,size,target);
return 0;
}