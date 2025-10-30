#include<iostream>
using namespace std;
int main(){
    int m[5];
    cout<<"Enter 5 element of Array1: ";
    for(int i=0;i<5;i++){
        
        cin>>m[i];
    }
    
    int n[7];
    cout<<"Enter 7 element of Array2: ";
    for(int i=0;i<7;i++){
        
        cin>>n[i];
    }
    int h= (sizeof(m)/4+sizeof(n)/4);
    cout<<"\nThe size of resultant array: "<<h;
    int man[h];
    int i=0,j=0,k=0;
    while(i<5&&j<7){
        if(m[i]<n[j]){
            man[k]=m[i];
            i++;
            k++;

        }
        else if(n[j]<m[i]){
            man[k]=n[j];
            k++;
            j++;

        }
        else{
            man[k]=m[i];
            i++;
            k++;
            man[k]=n[j];
            j++;
            k++;
        }


    }
    if(i<5){
        for(i;i<5;i++){
            man[k]=m[i];
            k++;
        }
    }
    if(j<7){
        for(j;j<7;j++){
            man[k]=n[j];
            k++;
        }
    }



cout<<"\nThe Sorted Array: ";
    for(int i=0;i<h;i++)
    cout<<man[i]<<" ";
    
    return 0;
}