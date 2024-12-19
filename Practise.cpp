#include<iostream>
using namespace std;

int main(){

    int arr[];
    int size;
    cout<<"Enter Size of Array: ";
    cin>>size;
    int max=arr[0];
   

   for (int i = 0; i < size; i++)
   {
    if(arr[i]>max){
        max=arr[i];
    }
   }
   
   return max;
   
}