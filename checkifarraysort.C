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
    int asc=1,des=1;
    
    for(int i=0;i<n-1;i++){
        if(m[i+1]<m[i]){
            asc=0;
            break;
        
         }
    }
    for(int i=0;i<n-1;i++){
        if(m[i+1]>m[i]){
            des=0;
            break;
        
         }
    }
    
    if(asc==1||des==1){
        cout<<" The Array is sorted. ";
    }
    else {
        cout<<" The array is not sorted.";
    }
   
  
    
    
    return 0;
}