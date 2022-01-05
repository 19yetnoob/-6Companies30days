class Solution
{
    public:
    //Function to return k largest elements from an array.
    vector<int> kLargest(int arr[], int n, int k)
    {
        sort(arr,arr+n);
        vector<int>a;
        for(int i=n-k;i<n;i++)
        {
            a.push_back(arr[i]);
        }
        sort(a.rbegin(),a.rend());
        return a;
    }
};
