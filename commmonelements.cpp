#include<iostream>
using namespace std;
int commonElements(int arr1[], int size1, int arr2[], int size2)
{
    int count = 0;
    for(int i=0; i<size1; i++)
    {
        for(int j=0; j<size2; j++)
        {
            if(arr1[i] == arr2[j])
            {
                cout << arr1[i] << " ";
                break;
            }
        }
    }
    return count;
}
int main()
{
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {3, 4, 6, 7};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int result = commonElements(arr1, size1, arr2, size2);
    return 0;
}