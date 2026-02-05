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
    cout<<"The given array is: "<<endl;
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(max<arr[i])
        max=arr[i];
    }
    cout<<"The Largest element in the array is: "<<max;
    delete []arr;
    return 0;
}
