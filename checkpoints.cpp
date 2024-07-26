#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    cin>>n>>q; 
    multiset<int> st;  // bydefault stores elements in the sorted order
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        st.insert(k);
    }
    for(int i=0;i<q;i++){
        string s;
        int no;
        cin>>s>>no;
        if(s=="DEL"){
            st.erase(st.find(no)); // delete the address having value no.
        }
        else{
            st.insert(no);
        }
        cout<<*st.rbegin()-*st.begin()<<'\n';
    }
}