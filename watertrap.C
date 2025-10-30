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
    int p[n];
    p[0]=-1;
    int max=m[0];
    for(int i=1;i<n;i++){
        p[i]=max;
        if(max<m[i])
        max=m[i];
        
        
    }
    cout<<"The Previous greatest element: "<<endl;


    for(int i=0;i<n;i++){
        
        cout<<p[i]<<" ";
    }
    int q[n];
    q[n-1]=-1;
    max=m[n-1]; 
    for(int i=n-2;i>=0;i--){
        q[i]=max;
        if(max<m[i])max=m[i];
    }
    cout<<endl<<"The next greatest element:"<<endl;
    for(int i=0;i<n;i++){
        
        cout<<q[i]<<" ";

    }
    int r[n];
    for(int i=1;i<n;i++){
        if(p[i]<q[i])r[i]=p[i];
        else r[i]=q[i];
    }
    int wat=0;
    for(int i=1;i<n;i++){
        if(r[i]>m[i])wat=wat+(r[i]-m[i]);
       
    }
    cout<<"\nThe total water collection: "<<endl;
    cout<<wat;
    return 0;
    

    
    
  
    
    
    return 0;
}