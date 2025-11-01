#include<iostream>
using namespace std;
int main(){
    int m[10];
    cout<<"Enter 10 element of Array1: ";
    for(int i=0;i<10;i++){
        
        cin>>m[i];
    }
    
    int n[4];
    cout<<"Enter 4 element of Array2: ";
    for(int i=0;i<4;i++){
        
        cin>>n[i];
    }
    int i=5,j=3,k=9;
    while(j>=0){
        if(m[i]<=n[j]){
            m[k]=n[j];
            k--;
            j--;

        }
        else{
            m[k]=m[i];
            k--;
            i--;
            
        }


    }
    
cout<<"\nThe Sorted Array: ";
    for(int i=0;i<10;i++)
    cout<<m[i]<<" ";
    
    return 0;
}