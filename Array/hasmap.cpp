#include<iostream>
#include<unordered_map>
#include<string>

using namespace std;

int main(){
    unordered_map<string,int>phnum;

    phnum["Ram"]=7999;


    cout<<"Ram Phone Number is: "<<phnum["Ram"];


    return 0;


}