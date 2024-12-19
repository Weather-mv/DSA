#include <iostream>
using namespace std;
 

int main()
{
    int n;
    cout<<"Enter the Number :";
    cin>>n;
    int arr[1000];
    
    for(int i=2;i<n-1;i++)
    arr[i] = arr[i-1]+arr[i-2];

    cout<<arr[n-1]<<"";
} 
 