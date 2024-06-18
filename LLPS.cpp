#include <bits/stdc++.h>
using namespace std;
int solve(int x){
 
}
int main()
{
  string s;
  cin>>s;
  string ans;
  map<char,int> freq;
  char max=s[0];
  for(char chara:s){
    if(chara > max){
        max=chara;
    }
    freq[chara]++;
  }
  for(int i=0;i<freq[max];i++){
    ans+=max;
  }
  cout<<ans;
}
