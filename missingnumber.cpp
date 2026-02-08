#include<iostream>
using namespace std;
int missingNumber(int arr[],int n){
    // sum of all elements of array
int sum=0;
for(int i=0;i<n-1;i++){
    sum+=arr[i];
}

// sum of n 
int sumOfN=n*(n+1)/2;

 return sumOfN-sum ;
}

int main(){
    int size;
    cout<<"Enter the size of the Array: ";
    cin>>size;
    int *arr=new int [size-1];
    cout<<"Enter the "<<size-1<<" elements: ";
    for(int i=0;i<size-1;i++){
        cin>>arr[i];
    }
    
    cout<<"Mising number is "<<missingNumber(arr,size);
    
    delete [] arr;
    return 0;
}