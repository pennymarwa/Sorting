/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int quicksort(int arr[], int left, int right)
{
    int x =  right, y = left ;
    int mid = (right + left) / 2;
    int pivot = arr[right];
    while(left < right)
    {
        while(arr[left] < pivot)
        {
            if(left == right)
                break;
            left++;
        }
        while(arr[right] >= pivot)
        {
            if(left == right)
                break;
            right--;
        }
        if(left<=right)
        {
            int temp;
            temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
        }
    }
    int temp1;
    temp1 = arr[left];
    arr[left] = arr[x];
    arr[x] = temp1;
    if(left > y)
        {
            quicksort(arr, 0, left-1);
        }
    if(right < x)
        quicksort(arr, right+1, x);
    return true;
}



int main()
{
    int myArray [] = {451,372,258,124,51,21,87,988,876,76,8768,433,543,6} ;
    int x =  (sizeof(myArray)/sizeof(*myArray)) ;
    int i = 0, j = x-1;
    quicksort(myArray, i, j);

    for (int i = 0; i <= x-1; i++)
    {
        std::cout << myArray[i] << ", ";
    }
    
}

  


