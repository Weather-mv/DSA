#include<iostream>
using namespace std;

int main(){
    int arr[1000];
    int n;      
    cout<<"Enter the size of Array: ";
    cin>>n;
    cout<<"Enter the element of Array: ";
    for(int i=0;i<n;i++)
    cin>>arr[i];

    for(int i =0; i<n;i++){
        int index = i;

        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[index])
            index=j;
        }

        swap(arr[i],arr[index]);
    } 

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}