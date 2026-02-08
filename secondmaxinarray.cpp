#include<iostream>
using namespace std;
int secondMaxInArray(int arr[],int n){
    // first max
int firstMax=-1;
for(int i=0;i<n;i++){
    if(arr[i]>firstMax)
    firstMax=arr[i];
}

// second max
int secondMax=-1;
for(int i=0;i<n;i++){
    if(arr[i]!=firstMax)
    secondMax=max(secondMax,arr[i]);
}
 return secondMax;
}

int main(){
    int size;
    cout<<"Enter the size of the Array: ";
    cin>>size;
    int *arr=new int [size];
    cout<<"Enter the "<<size<<" elements: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    
    cout<<"The second maximum number in the array is "<<secondMaxInArray(arr,size)<<".";
    delete [] arr;
    return 0;
}