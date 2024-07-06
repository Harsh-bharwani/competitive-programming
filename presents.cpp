#include<bits/stdc++.h>
using namespace std;
int main(){
    // index i is giving gift to its element p[i] (1-based index)
    int n;
    cin>>n;
    vector<int> p(n);
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    vector<int> ans;
    for(int i=1;i<=n;i++){  // for every no we iterate over the array to find the index of the no in the index 
        for(int j=0;j<n;j++){
            if(i==p[j]){
                ans.push_back(j+1); // because 1-based index
                break;
            }
        }
    }
    for (int  i = 0; i < n; i++)
    {
        cout<<ans[i]<<' ';
    }
    

}