/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void merge(int arr[], int left, int right, int mid)
{
    int mid2 = mid + 1;
    int lf = left;
    int rt = right;
    int j = right - left + 1;
    int temp[j];
    int k = 0;
    cout << "in merge" << left << mid << right <<endl;
    while(left <= mid && mid2 <= right)
    {

    cout << arr[left] << left << endl;
        if(arr[left] < arr[mid2])
        {
            temp[k] = arr[left];
            left++;
            k++;
        }
        else
        {
            temp[k] = arr[mid2];
            mid2++;
            k++;
        }
    }
    cout << arr[left] << left << endl;
    while(left <= mid)
        {
            temp[k] = arr[left];
            left++;
            k++;
            
        }
    while(mid2 <= right)
        {
            temp[k] = arr[mid2];
            mid2++;
        }
    
    k = 0;
    for(int x = lf; x <= rt; x++)
    {
        arr[x] = temp[k];
        k++;
    }
}

void mergeSort(int arr[], int left, int right)
{
    
    if (left < right)
    {
        int mid = left + (right-left) / 2;
        //cout << "inide sort " << left << mid << right <<endl;
        mergeSort (arr, left, mid);
        mergeSort (arr, mid+1, right);
        // cout << "before merge" << arr[left] << left << endl;
        merge(arr, left, right, mid);
    }
}




int main()
{
    int myArray [] = {451,372,258,124,51,21,87,988,876,76,8768,433,543,6} ;
    int x =  (sizeof(myArray)/sizeof(*myArray)) ;
    int i = 0, j = x-1;
    mergeSort(myArray, i, j);

    for (int i = 0; i <= x-1; i++)
    {
        std::cout << myArray[i] << ", ";
    }
    
}

  


