#include<iostream>
#include<string>
using namespace std;
int main(){
    string borze;
    cin>>borze;
    for (int i=0;i<borze.length();i++){
         if( borze[i]=='.')
         cout<<0;
         else if(borze[i]=='-' && borze[i+1]=='.'){
         cout<<1;
         i++;
         }
         else if(borze[i]=='-' && borze[i+1]=='-')
          {cout<<2;
          i++;
          }
    }
}