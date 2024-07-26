#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    char small_ch=s[0];
    int min_ind=0;
    for(int i=1;i<s.size()-1;i++){
        if(s[i]<small_ch){
            small_ch=s[i];
            min_ind=i;
        }
    }
    char small_ch2=s[min_ind+1];
    for(int i=min_ind+2;i<s.size();i++){
        if(s[i]<small_ch2){
            small_ch2=s[i];
        }
    }
    cout<<small_ch<<small_ch2<<'\n';
}
 
