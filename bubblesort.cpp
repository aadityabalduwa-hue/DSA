// bubble sort is a simple sorting algorithm that repeatedly steps through the list, 
//compares adjacent elements and swaps them if they are in the wrong order. 
//The pass through the list is repeated until the list is sorted. The algorithm gets its name from the way smaller elements "bubble" to the top of the list.
// The time complexity of bubble sort is O(n^2) in the worst and average case, and O(n) in the best case when the array is already sorted.
#include<iostream>
using namespace std;
void bubblesort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    return;
}
int main()
{
    int arr[]={64,34,25,12,22,11,90};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr,n);
    cout<<"Sorted array: \n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}