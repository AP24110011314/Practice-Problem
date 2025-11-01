#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>man(5);
    cout<<"Enter element: ";
    for(int i=0;i<5;i++){
        
        cin>>man[i];
    }
    cout<<"\nThe Array: ";
    for(int i=0;i<5;i++)
    cout<<man[i]<<" ";
    int i=0,j=4;
    while(i<j){
    
    if(man[i]==2&&(man[j]==0||man[j]==1)){
        int temp=man[i];
        man[i]=man[j];
        man[j]=temp;
        i++,j--;

        
    }
    else{
        if(man[i]==0||man[i]==1)i++;
        else if(man[j]==2)j--;
    }
}
    cout<<"\nThe : ";
    for(int i=0;i<5;i++)
    cout<<man[i]<<" ";
    
    
    int m=0,n=j;
    while(m<n){
    if(man[n]==2)n--;
    if(man[m]==0)m++;
    if(man[m]==1&&man[n]==0){
        man[m]=0;
        man[n]=1;
        m++,n--;
    }
    
}
cout<<"\nThe Sorted Array: ";
    for(int i=0;i<5;i++)
    cout<<man[i]<<" ";
    
    return 0;
}