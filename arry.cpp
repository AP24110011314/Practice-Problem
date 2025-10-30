#include<iostream>
using namespace std;
int main(){
    int a[10];
    for (int i = 0; i < 10; i++)
    { 
        cout<<"Enter the Element: ";
        cin>>a[i];
    }
    cout<<"Array::  "<<endl;
     for (int i = 0; i < 10; i++)
    {
        cout<<a[i]<<endl;
    }
    int max=a[0],smax;
    for(int i=0;i<10;i++){
        if(a[i]>max){
            smax=max;

            max=a[i];
        }
        
    }
    cout<<max<<"  "<<smax;
    
    return 0;
}