#include <iostream>
using namespace std;

int linearsearch(int arr[], int size, int target)
{
    for(int i = size - 1; i >= 0; i--)
    {
        if(arr[i] == target)
        {
            return i;   // Return index of last occurrence
        }
    }
    return -1;          // Target not found
}

int main()
{
    int arr[] = {3, 4, 6, 7, 2, 3, 5, 4, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 2;

    int index = linearsearch(arr, size, target);

    if(index != -1)
        cout << "Last occurrence of " << target << " is at index " << index << endl;
    else
        cout << "Target not found" << endl;

    return 0;
}