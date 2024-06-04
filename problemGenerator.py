#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
cin>>t;
while(t--){
int n,m;
cin>>n>>m;
string a;
cin>>a;
 
set<int> s;
for (size_t i = 0; i < a.size(); i++)
{
    s.insert(a[i]);
}
 
int miss=7-s.size();
miss=miss*m;
 
map<char,int> freq;
for (char c : a){
    freq[c]++;
}
int count=0;
for (const auto& pair : freq) {
    if (pair.second < m) {
        count += m - pair.second;
    }
}
 
cout<<(miss+ count)<<"\n";
}
}
