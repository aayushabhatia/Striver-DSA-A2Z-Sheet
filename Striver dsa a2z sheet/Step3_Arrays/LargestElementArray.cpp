// https://bit.ly/3Pld280

//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        sort(arr.begin(), arr.end());
        return arr[n-1];
    }
};

/*
class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        int largest= arr[0];
        for(int i=1; i<=n; i++){
            if(largest< arr[i]){
                largest= arr[i];
            }
        }
        return largest;
    }
};
*/

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int>arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        cout << ob.largest(arr, n) << "\n";
    }
    return 0;
}

// } Driver Code Ends