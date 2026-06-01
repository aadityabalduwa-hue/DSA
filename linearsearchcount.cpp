#include<iostream>
using namespace std;
int linearsearch(int arr[],int size,int target)
{
    int count=0,i;
    for(i=0;i<size;i++)
    {
        if(arr[i]==target)
        {
            count++;
        }
       //else{
        //cout<<"target not found";
          //  return -1;
       //}
        //return 0;
    }
    cout<<count;
}
int main()
{
    int arr[]={3,4,6,7,2,3,5,4,2};
    int size= sizeof(arr)/sizeof(arr[0]);
    int target=2;
    linearsearch(arr,size,target);
    return 0;
}