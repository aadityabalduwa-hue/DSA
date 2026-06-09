//insertion sort is a simple sorting algorithm that builds the final sorted array one item at a time. It is much less efficient on large lists than more advanced algorithms such as quicksort, heapsort, or merge sort. However, insertion sort provides several advantages: it is simple to implement, efficient for small data sets, and stable (does not change the relative order of equal elements). The time complexity of insertion sort is O(n^2) in the worst and average case, and O(n) in the best case when the array is already sorted.
// time complexity of insertion sort is O(n^2) in the worst and average case, and O(n) in the best case when the array is already sorted.
#include<iostream>
using namespace std;
void insertionsort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int key=arr[i]; //key is the current element to be compared with the previous elements
        int j=i-1; //j will start from index 0 and then from last index of the sorted array
        while(j>=0 && arr[j]>key)  //while loop will run until we find the correct position for the key element in the sorted array
        {
            arr[j+1]=arr[j];  //if the current element is greater than the key element then we will move the current element one position to the right
            j--;               // j will keep on moving left until we find the correct position for the key element
        }
        arr[j+1]=key;
    }
    return;
}
int main()
{
    int arr[]={12,11,13,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    insertionsort(arr,n);
    cout<<"Sorted array: \n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}