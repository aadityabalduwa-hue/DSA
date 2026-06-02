#include<iostream>
using namespace std;
int palindrome(int arr[], int size)
{
    for(int i=0; i<size/2; i++)
    {
        if(arr[i] != arr[size-1-i])
        {
            return 0; // Not a palindrome
        }
    }
    return 1; // Is a palindrome
}
int main()
{
    int arr[]={1,2,3,2,1};
    int size=5;
    if(palindrome(arr, size))
    {
        cout<<"The array is a palindrome."<<endl;
    }
    else
    {
        cout<<"The array is not a palindrome."<<endl;
    }
    return 0;
}