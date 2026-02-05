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
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    
    }
    float average=sum/n;
    cout<<"The sum of  element in the array is: "<<sum<<endl;
    cout<<"The average of  element in the array is: "<<average<<endl;

    delete []arr;
    return 0;
}
