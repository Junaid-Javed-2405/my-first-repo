#include<iostream>
using namespace std;
void reverseArray(int arr[],int n){
for(int i=0,j=n-1;i<j;i++,j--)
    swap(arr[i],arr[j]);

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
    reverseArray(arr,size);
    cout<<"Reverse array:  ";
    for(int i=0;i<size;i++)
    {
    cout<<arr[i]<<" ";
    }
    delete [] arr;
    return 0;
}