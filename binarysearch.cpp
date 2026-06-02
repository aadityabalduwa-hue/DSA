#include<iostream>
using namespace std;
int binarySearch(int arr[], int size, int target)
{
    int left = 0, right = size - 1;
    while(left <= right)
    {
        int mid = left + (right - left) / 2;
        if(arr[mid] == target)
        {
            return mid;
        }
        else if(arr[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {2,4,5,9,11,13,14,15,20,22,23,26,30,32,33};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 26;

    int index = binarySearch(arr, size, target);

    if(index != -1)
        cout << "Element " << target << " found at index " << index << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}