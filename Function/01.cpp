#include<iostream>
using namespace std;

int Sum(int a , int b)
{
    int ans =a+b;
    return ans;
}

int Mul(int a, int b)
{
    int ans = a*b;
    return ans;
}

void func()
{
 cout<<"Hello MOtherfucker";
}


int main()
{
    int m,n;
    cout<<"Enter 2 Number";
    cin>>m,n;
    cout<<Sum(m,n);
    cout<<Mul(m,n);
    cout<<endl;
    func();     
}