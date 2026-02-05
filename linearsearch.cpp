#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of arry: ";
    cin>>n;
    int *arr= new int [n];
    cout<<"Enter the "<<n<<" elements: ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int k;
    cout<<"Enter the number you want to search: ";
    cin>>k;
    cout<<"The given array is: "<<endl;
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    int findIndex;
    for(int i=0;i<n;i++){
        if(arr[i]==k)
        findIndex=i;
    }
    cout<<"The "<<k<<" is present at "<<findIndex<<" index.";
    delete []arr;
    return 0;
}
