#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the lenght of thr array: ";
    cin>>n;
    int m[n];
    cout<<"Enter elements of Array: ";
    for(int i=0;i<n;i++){
        
        cin>>m[i];
    }
    int key=-1;
    
    for(int i=n-2;i>=0;i--){
        if(m[i]<m[i+1]){
            key=i;
            break;
        }
    }
  
    for(int i=key+1;i<n-1;i++){
        int p=i;
        for(int j=i+1;j<n;j++){
            if(m[j]<m[i]){
                p=j;
            }
        }
        int temp=m[i];
        m[i]=m[p];
        m[p]=temp;

    }
    int ind=-1;
    
    for(int i=key+1;i<n;i++)
    if(m[i]>m[key]){
        ind=i;
        break;
    }
    
    


    int temp=m[key];
    m[key]=m[ind];
    m[ind]=temp;

    
    
    
cout<<"\nThe next Permutation Array: ";
    for(int i=0;i<n;i++)
    cout<<m[i]<<" ";
    
    return 0;
}