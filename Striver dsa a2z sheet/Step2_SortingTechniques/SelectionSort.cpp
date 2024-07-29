// https://bit.ly/3ppA6YJ

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}


// } Driver Code Ends
class Solution
{
    public:
    //Function to select the maximum element in the given range.
    int select(int arr[], int i)
    {
        int max = arr[0], ind = 0;
        for (int j=1; j<=i; j++)
        {
            //comparing current element with the maximum element.
            if (arr[j] > max)
            {
                //updating the maximum element and its index.
                ind = j;
                max = arr[j];
            }
        }
        //returning the index of the maximum element.
        return ind;
    }
    
    public:
    //Function to perform selection sort on the given array.
    void selectionSort(int arr[], int n)
    {
        int i, j;
        for (i = n-1; i >=0; i--)      
        {
            //finding the maximum element in the unsorted part of the array.
            int j = select(arr, i);
            //swapping the maximum element with the last element of the unsorted part.
            swap(&arr[i], &arr[j]);
        }
    }
};

//{ Driver Code Starts.
 
/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
// Driver program to test above functions
int main()
{
    int arr[1000],n,T,i;
  
    scanf("%d",&T);
    
    while(T--){
        
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      
    Solution ob;  
    ob.selectionSort(arr, n);
    printArray(arr, n);
    }
    return 0;
}

// } Driver Code Ends