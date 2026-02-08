#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int x){
for(int i=0;i<n;i++){
    if(arr[i]==x)
    return i;
}

return -1;
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
    int find;
    cout<<"Enter the element to be find in the Array: ";
    cin>>find;
    cout<<"The "<<find<<" is persent at "<<binarySearch(arr,size,find)<<" index in the array.";

    delete [] arr;
    return 0;
}