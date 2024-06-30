/* You are required to complete the function below
*  arr[]: input array
*  n: size of array
*/
class Solution{
  public:
    //Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n)
    { 
        //Your code here
        sort(arr,arr+n);
        for(int i=0;i<n;i++){
            int l=i+1;
            int r=n-1;
            while(l<r){
            int sum=arr[i]+arr[l]+arr[r];
            if(sum==0) return true;
            if(sum>0) r-=1;
            else l+=1;
            }
        }
        return false;
    }
};
