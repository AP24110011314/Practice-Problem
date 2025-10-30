#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the lenght of the array: ";
    cin>>n;
    int m[n];
    cout<<"Enter elements of Array: ";
    for(int i=0;i<n;i++){
        
        cin>>m[i];
    }
    
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(m[j]==0){
                int temp=m[j];
                m[j]=m[j+1];
                m[j+1]=temp;
            }
        }
        
    }
     cout<<"\n Array: ";
    for(int i=0;i<n;i++){
        
        cout<<m[i]<<" ";
    }
    
    
    
    return 0;
}