#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the nth term ";
    cin>>n;
    int first=0,second=1;
    if(n==1)
    cout<<first<<" ";
    else if(n==2)
    cout<<first<<" "<<second<<" ";
    else if(n>2){
        cout<<first<<" "<<second<<" ";
         for(int i=3;i<=n;i++){
          int nextTerm=first+second;
          cout<<nextTerm<<" ";
          first=second;
          second=nextTerm;
       }
    }
    else
    cout<<"Invalid Input! Try Positive number.";
return 0;
}