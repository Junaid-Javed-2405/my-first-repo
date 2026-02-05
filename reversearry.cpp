#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of arry: ";
    cin>>n;
    int *arr= new int [n];
    cout<<"Enter the "<<n<<" elements: ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<"The given array is: "<<endl;
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    for(int i=0,j=n-1;i<j;i++,j--){
        swap(arr[i],arr[j]);
    }
    cout<<"The reverse array is: ";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";

    delete []arr;
    return 0;
}
