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
    
    
    for(int i=0,j=0;i<n;i++){
        if(m[i]!=0){
            int temp=m[i];
            m[i]=m[j];
            m[j]=temp;
            j++;
        }
        
        
    }
     cout<<"\n Array: ";
    for(int i=0;i<n;i++){
        
        cout<<m[i]<<" ";
    }
    
    
    
    return 0;
}