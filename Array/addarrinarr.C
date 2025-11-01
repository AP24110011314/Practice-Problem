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
    int i=0,j=0;
    while(j<4){
        if(m[i]<=n[j]){
            i++;

        }
        else{
            
            for(int k=9 ;k>i;k--){
                m[k]=m[k-1];
            }
            m[i]=n[j];
            j++;
            i++;
            
        }


    }
    
cout<<"\nThe Sorted Array: ";
    for(int i=0;i<10;i++)
    cout<<m[i]<<" ";
    
    return 0;
}