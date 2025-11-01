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
    int max1=0,max2=0,max3=0;
    
    for(int i=0;i<n;i++){
        if(m[i]>max1){
            max3=max2;
            max2=max1;
            max1=m[i];
        
        }
         else if(m[i]>max2&&m[i]!=max1){
            max3=max2;
            max2=m[i];
         }
         else if(m[i]>max3&&m[i]!=max1&&m[i]!=max2){
            max3=m[i];
         }
    }
    cout<<"\nFirst Greatest element: "<<max1;
    cout<<"\nSecond Greatest element: "<<max2;
    cout<<"\nThird Greatest element: "<<max3;
  
    
    
    return 0;
}