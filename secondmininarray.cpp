#include<iostream>
using namespace std;
int secondMinInArray(int arr[],int n){
    // first min
int firstMin=INT_MAX;
for(int i=0;i<n;i++){
    if(arr[i]<firstMin)
    firstMin=arr[i];
}

// second min
int secondMin=INT_MAX;
for(int i=0;i<n;i++){
    if(arr[i]!=firstMin)
    secondMin=min(secondMin,arr[i]);
}
 return secondMin;
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
    
    cout<<"The second minimum number in the array is "<<secondMinInArray(arr,size)<<".";
    delete [] arr;
    return 0;
}