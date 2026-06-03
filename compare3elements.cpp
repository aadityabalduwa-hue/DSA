#include <iostream>
using namespace std;
int commonelements(int arr1[],int arr2[],int arr3[],int size1,int size2,int size3)
{
    int count=0,i,j,k;
    for(i=0 ;i< size1; i++)
    {
        for(j=0; j<size2 ;j++)
        {
            if(arr1[i]==arr2[j])
            {
             for(k=0;k<size3;k++)
             {
                if(arr2[j]==arr3[k])
                {
                    cout<<arr1[i]<<" ";
                    count++;
                    break;
                }
             }
            }
        }
    }
}
int main()
{
    int arr1[] = {1, 2, 3};
    int arr2[] = {2, 3, 4};
    int arr3[] = {3, 4, 5};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int size3 = sizeof(arr3) / sizeof(arr3[0]);
    int result = commonelements(arr1, arr2, arr3, size1, size2, size3);
    return 0;
}