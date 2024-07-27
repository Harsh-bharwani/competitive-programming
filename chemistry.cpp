#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        map<char,int> freq;
        for (int i = 0; i < s.size(); i++)
        {
            freq[s[i]]++;
        }
        int odd_freq_ct=0;
        for(const auto &pair:freq){
            if(pair.second%2==1){
                odd_freq_ct++;
            }
        }
        k-=odd_freq_ct;
        if(k<-1){
            cout<<"NO"<<'\n';
        }
        else{
            cout<<"YES"<<'\n';
        }
        
    }
}
